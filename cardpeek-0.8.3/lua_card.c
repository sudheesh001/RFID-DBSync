/**********************************************************************
*
* This file is part of Cardpeek, the smart card reader utility.
*
* Copyright 2009-2014 by Alain Pannetrat <L1L1@gmx.com>
*
* Cardpeek is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Cardpeek is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with Cardpeek.  If not, see <http://www.gnu.org/licenses/>.
*
*/
#include <lauxlib.h>
#include "lua_card.h"
#include "smartcard.h"
#include "lua_bytes.h"
#include <stdlib.h>
#include "iso7816.h"
#include "misc.h"
#include "lua_ext.h"
#include "gui.h"
#include <string.h>

cardreader_t *READER=NULL;

void luax_set_card_reader(cardreader_t *r)
{
    READER = r;
}

/**/

static int subr_card_connect(lua_State *L)
{
    if(!cardreader_connect(READER,PROTOCOL_T0 | PROTOCOL_T1))
        lua_pushboolean(L,0);
    else
        lua_pushboolean(L,1);
    return 1;
}

static int subr_card_disconnect(lua_State *L)
{
    cardreader_disconnect(READER);

    lua_pushboolean(L,1);
    return 1;
}

static int subr_card_warm_reset(lua_State *L)
{
    if (cardreader_warm_reset(READER))
        lua_pushboolean(L,1);
    else
        lua_pushboolean(L,0);
    return 1;
}

static int subr_card_last_atr(lua_State *L)
{
    const bytestring_t *atr = cardreader_last_atr(READER);

    lua_push_bytestring(L,bytestring_duplicate(atr));
    return 1;
}

static int subr_card_info(lua_State *L)
{
    char **info=cardreader_get_info(READER);
    int index;

    lua_newtable(L);

    for (index=0; info[index]!=NULL; index+=2)
    {
        lua_pushstring(L,info[index]);
        lua_pushstring(L,info[index+1]);
        lua_settable(L,-3);
        g_free(info[index]);
        g_free(info[index+1]);
    }
    g_free(info);

    /* this update is needed since cardreader_get_info is silent upon success */
    gui_update(0);
    return 1;
}

static unsigned short luax_card_send(lua_State *L, const bytestring_t *command, bytestring_t *result)
{
    bytestring_t* command_dup;
    bytestring_t* get_response;
    bytestring_t* tmp_response;    
    unsigned short SW;
    unsigned char SW1, SW2;
    apdu_descriptor_t ad;
    char *tmp;
    char *sw_string = NULL;

    if (iso7816_describe_apdu(&ad,command)!=ISO7816_OK)
    {
        tmp = bytestring_to_format("%D",command);
        log_printf(LOG_ERROR,"Could not parse APDU format: %s",tmp);
        free(tmp);
        return CARDPEEK_ERROR_SW;
    }
   
    tmp = bytestring_to_format("%D",command);
    if (strlen(tmp)>37)
        strcpy(tmp+32,"(...)");
    log_printf(LOG_INFO,"send: %s [%s]", tmp, iso7816_stringify_apdu_class(ad.apdu_class));
    free(tmp);

    SW = cardreader_transmit(READER,command,result);
    SW1 = (SW>>8)&0xFF;
    SW2 = SW&0xFF;

    luax_variable_call("card.stringify_sw","u>s",SW,&sw_string);

    tmp = bytestring_to_format("%D",result);
    if (strlen(tmp)>37)
        strcpy(tmp+32,"(...)");
    log_printf(LOG_INFO,"Recv: %04X %s [%s]", SW, tmp, sw_string);
    free(tmp);
    if (sw_string) free(sw_string);

    if (SW1==0x6C) /* Re-issue with right length */
    {
        command_dup = bytestring_duplicate(command);
        if (ad.le_len==3) /* in case of extended le */
            bytestring_resize(command_dup,bytestring_get_size(command_dup)-2);
        bytestring_set_element(command_dup,-1,SW2);
        SW = luax_card_send(L,command_dup,result);
        bytestring_free(command_dup);
    }
    else
    {
        while (SW1==0x61) /* use Get Response */
        {
            get_response = bytestring_new_from_string("8:00C0000000");
            tmp_response = bytestring_new(8);

            bytestring_set_element(get_response,4,SW2);

            SW = luax_card_send(L,get_response,tmp_response);

            bytestring_append_data(result,
                    bytestring_get_size(tmp_response),
                    bytestring_get_data(tmp_response));

            bytestring_free(get_response);
            bytestring_free(tmp_response);
            SW1 = (SW>>8)&0xFF;
            SW2 = SW&0xFF;
        }
    }

    return SW;
}

static int subr_card_send(lua_State *L)
{
    bytestring_t *command = luaL_check_bytestring(L,1);
    bytestring_t *result = bytestring_new(8);
    unsigned short SW = luax_card_send(L,command,result);

    lua_pushinteger(L,SW);
    lua_push_bytestring(L,result);
    return 2;
}

static int subr_card_set_command_interval(lua_State *L)
{
    unsigned interval=(unsigned)lua_tointeger(L,1);
    cardreader_set_command_interval(READER,interval);
    return 0;
}

static int subr_card_make_file_path(lua_State *L)
{
    int path_type;
    bytestring_t *file_path = bytestring_new(8);
    const char *path;

    if (lua_isnoneornil(L,1))
        path = "";
    else
        path = lua_tostring(L,1);

    if (iso7816_make_file_path(file_path,&path_type,path)!=ISO7816_OK)
    {
        bytestring_free(file_path);
        lua_pushnil(L);
        lua_pushnil(L);
        log_printf(LOG_ERROR,"Could not parse card file path '%s'",path);
    }
    else
    {
        lua_push_bytestring(L,file_path);
        lua_pushinteger(L,path_type);
    }
    return 2;
}

static int subr_card_log_save(lua_State *L)
{
    const char *filename;

    if (lua_isnoneornil(L,1))
        return luaL_error(L,"Expecting one parameter: a filename (string)");

    filename= lua_tostring(L,1);

    if (cardreader_log_save(READER,filename)!=SMARTCARD_OK)
    {
        log_printf(LOG_ERROR,"Could not write data to '%s'",filename);
        lua_pushboolean(L,0);
    }
    else
    {
        log_printf(LOG_INFO,"Wrote card data to '%s'",filename);
        lua_pushboolean(L,1);
    }
    return 1;
}

static int subr_card_log_clear(lua_State *L)
{
    UNUSED(L);

    cardreader_log_clear(READER);
    return 0;
}

static int subr_card_stringify_sw(lua_State *L)
{
    unsigned short sw = (unsigned short)luaL_checkinteger (L,1);
    const char *strval = iso7816_stringify_sw(sw);

    lua_pushstring(L,strval);
    return 1;   
}

int luax_card_reset_values(lua_State *L)
{
    lua_getglobal(L,"card");
    if (lua_istable(L,-1)==0)
    {
        lua_pop(L,1);
        return 0;
    }
    lua_pushstring(L, "CLA");
    lua_pushinteger(L, 0);
    lua_settable(L,-3);
    lua_pushstring(L,"stringify_sw");
    lua_pushcfunction(L,subr_card_stringify_sw);
    lua_settable(L,-3);
    lua_pop(L,1);
    return 1;
}

static const struct luaL_Reg cardlib [] =
{
    {"connect", subr_card_connect },
    {"disconnect", subr_card_disconnect },
    {"warm_reset", subr_card_warm_reset },
    {"last_atr", subr_card_last_atr },
    {"info", subr_card_info },
    {"send", subr_card_send },
    {"set_command_interval", subr_card_set_command_interval },
    {"make_file_path", subr_card_make_file_path },
    {"log_clear", subr_card_log_clear },
    {"log_save", subr_card_log_save },
    {"stringify_sw", subr_card_stringify_sw },
    {NULL, NULL}  /* sentinel */
};

int luaopen_card(lua_State *L)
{

    luaL_newlib(L, cardlib);
    lua_setglobal(L,"card");

    return 1;
}

