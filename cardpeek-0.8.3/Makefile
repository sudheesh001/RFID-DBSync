# Makefile.in generated by automake 1.14.1 from Makefile.am.
# Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2013 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.





am__is_gnu_make = test -n '$(MAKEFILE_LIST)' && test -n '$(MAKELEVEL)'
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/cardpeek
pkgincludedir = $(includedir)/cardpeek
pkglibdir = $(libdir)/cardpeek
pkglibexecdir = $(libexecdir)/cardpeek
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-apple-darwin14.0.0
host_triplet = x86_64-apple-darwin14.0.0
bin_PROGRAMS = cardpeek$(EXEEXT)
subdir = .
DIST_COMMON = INSTALL NEWS README AUTHORS ChangeLog \
	$(srcdir)/Makefile.in $(srcdir)/Makefile.am \
	$(top_srcdir)/configure $(am__configure_deps) \
	$(srcdir)/config.h.in depcomp $(dist_man_MANS) COPYING compile \
	config.guess config.rpath config.sub install-sh missing
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/iconv.m4 \
	$(top_srcdir)/m4/lib-ld.m4 $(top_srcdir)/m4/lib-link.m4 \
	$(top_srcdir)/m4/lib-prefix.m4 $(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
am__CONFIG_DISTCLEAN_FILES = config.status config.cache config.log \
 configure.lineno config.status.lineno
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
am__installdirs = "$(DESTDIR)$(bindir)" "$(DESTDIR)$(man1dir)" \
	"$(DESTDIR)$(desktopdir)" "$(DESTDIR)$(docdir)" \
	"$(DESTDIR)$(iconsdir)"
PROGRAMS = $(bin_PROGRAMS)
am_cardpeek_OBJECTS = asn1.$(OBJEXT) bytestring.$(OBJEXT) \
	gui_flexi_cell_renderer.$(OBJEXT) dyntree_model.$(OBJEXT) \
	crypto.$(OBJEXT) replay.$(OBJEXT) gui.$(OBJEXT) \
	iso7816.$(OBJEXT) lua_nodes.$(OBJEXT) lua_asn1.$(OBJEXT) \
	lua_bit.$(OBJEXT) lua_bytes.$(OBJEXT) lua_card.$(OBJEXT) \
	lua_crypto.$(OBJEXT) lua_ext.$(OBJEXT) lua_log.$(OBJEXT) \
	lua_ui.$(OBJEXT) main.$(OBJEXT) misc.$(OBJEXT) \
	pathconfig.$(OBJEXT) smartcard.$(OBJEXT) system_info.$(OBJEXT) \
	a_string.$(OBJEXT) gui_about.$(OBJEXT) gui_toolbar.$(OBJEXT) \
	gui_logview.$(OBJEXT) gui_cardview.$(OBJEXT) \
	gui_readerview.$(OBJEXT) gui_scratchpad.$(OBJEXT) \
	gui_inprogress.$(OBJEXT) http_download.$(OBJEXT) \
	lua_iconv.$(OBJEXT) cardpeek_update.$(OBJEXT)
cardpeek_OBJECTS = $(am_cardpeek_OBJECTS)
cardpeek_DEPENDENCIES = cardpeek_resources.$(OBJEXT)
cardpeek_LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(cardpeek_LDFLAGS) \
	$(LDFLAGS) -o $@
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
DEFAULT_INCLUDES = -I.
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
am__mv = mv -f
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
AM_V_CC = $(am__v_CC_$(V))
am__v_CC_ = $(am__v_CC_$(AM_DEFAULT_VERBOSITY))
am__v_CC_0 = @echo "  CC      " $@;
am__v_CC_1 = 
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_CCLD = $(am__v_CCLD_$(V))
am__v_CCLD_ = $(am__v_CCLD_$(AM_DEFAULT_VERBOSITY))
am__v_CCLD_0 = @echo "  CCLD    " $@;
am__v_CCLD_1 = 
SOURCES = $(cardpeek_SOURCES)
DIST_SOURCES = $(cardpeek_SOURCES)
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__uninstall_files_from_dir = { \
  test -z "$$files" \
    || { test ! -d "$$dir" && test ! -f "$$dir" && test ! -r "$$dir"; } \
    || { echo " ( cd '$$dir' && rm -f" $$files ")"; \
         $(am__cd) "$$dir" && rm -f $$files; }; \
  }
man1dir = $(mandir)/man1
NROFF = nroff
MANS = $(dist_man_MANS)
DATA = $(desktop_DATA) $(doc_DATA) $(icons_DATA)
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) \
	$(LISP)config.h.in
# Read a list of newline-separated strings from the standard input,
# and print each of them once, without duplicates.  Input order is
# *not* preserved.
am__uniquify_input = $(AWK) '\
  BEGIN { nonempty = 0; } \
  { items[$$0] = 1; nonempty = 1; } \
  END { if (nonempty) { for (i in items) print i; }; } \
'
# Make sure the list of sources is unique.  This is necessary because,
# e.g., the same source file might be shared among _SOURCES variables
# for different programs/libraries.
am__define_uniq_tagged_files = \
  list='$(am__tagged_files)'; \
  unique=`for i in $$list; do \
    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
  done | $(am__uniquify_input)`
ETAGS = etags
CTAGS = ctags
CSCOPE = cscope
AM_RECURSIVE_TARGETS = cscope
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
distdir = $(PACKAGE)-$(VERSION)
top_distdir = $(distdir)
am__remove_distdir = \
  if test -d "$(distdir)"; then \
    find "$(distdir)" -type d ! -perm -200 -exec chmod u+w {} ';' \
      && rm -rf "$(distdir)" \
      || { sleep 5 && rm -rf "$(distdir)"; }; \
  else :; fi
am__post_remove_distdir = $(am__remove_distdir)
DIST_ARCHIVES = $(distdir).tar.gz
GZIP_ENV = --best
DIST_TARGETS = dist-gzip
distuninstallcheck_listfiles = find . -type f -print
am__distuninstallcheck_listfiles = $(distuninstallcheck_listfiles) \
  | sed 's|^\./|$(prefix)/|' | grep -v '$(infodir)/dir$$'
distcleancheck_listfiles = find . -type f -print
ACLOCAL = ${SHELL} /Users/sudheeshsinganamalla/Documents/LakshyaHackathon/RFID-DBSync/cardpeek-0.8.3/missing aclocal-1.14
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 0
AUTOCONF = ${SHELL} /Users/sudheeshsinganamalla/Documents/LakshyaHackathon/RFID-DBSync/cardpeek-0.8.3/missing autoconf
AUTOHEADER = ${SHELL} /Users/sudheeshsinganamalla/Documents/LakshyaHackathon/RFID-DBSync/cardpeek-0.8.3/missing autoheader
AUTOMAKE = ${SHELL} /Users/sudheeshsinganamalla/Documents/LakshyaHackathon/RFID-DBSync/cardpeek-0.8.3/missing automake-1.14
AWK = awk
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -I/usr/local/Cellar/glib/2.42.1/include/glib-2.0 -I/usr/local/Cellar/glib/2.42.1/lib/glib-2.0/include -I/usr/local/opt/gettext/include  -g -O2
CPP = gcc -E
CPPFLAGS = 
CURL_CFLAGS = 
CURL_LIBS = -lcurl 
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
ECHO_C = \c
ECHO_N = 
ECHO_T = 
EGREP = /usr/bin/grep -E
EXEEXT = 
GDK_PIXBUF_PIXDATA = /usr/local/bin/gdk-pixbuf-pixdata
GLIB_CFLAGS = -I/usr/local/Cellar/glib/2.42.1/include/glib-2.0 -I/usr/local/Cellar/glib/2.42.1/lib/glib-2.0/include -I/usr/local/opt/gettext/include 
GLIB_COMPILE_RESOURCES = /usr/local/bin/glib-compile-resources
GLIB_LIBS = -L/usr/local/Cellar/glib/2.42.1/lib -L/usr/local/opt/gettext/lib -lglib-2.0 -lintl 
GREP = /usr/bin/grep
GTK_CFLAGS = -D_REENTRANT -I/opt/X11/include -I/opt/X11/include/cairo -I/opt/X11/include/pixman-1 -I/opt/X11/include -I/opt/X11/include/freetype2 -I/opt/X11/include/libpng15 -I/opt/X11/include -I/usr/local/Cellar/gtk+3/3.14.5/include/gtk-3.0 -I/usr/local/Cellar/at-spi2-atk/2.14.1/include/at-spi2-atk/2.0 -I/usr/local/Cellar/at-spi2-core/2.14.1/include/at-spi-2.0 -I/usr/local/Cellar/d-bus/1.8.12/include/dbus-1.0 -I/usr/local/Cellar/d-bus/1.8.12/lib/dbus-1.0/include -I/usr/local/Cellar/gtk+3/3.14.5/include/gtk-3.0 -I/usr/local/Cellar/glib/2.42.1/include/gio-unix-2.0/ -I/usr/local/Cellar/pango/1.36.8/include/pango-1.0 -I/usr/local/Cellar/harfbuzz/0.9.35_1/include/harfbuzz -I/usr/local/Cellar/pango/1.36.8/include/pango-1.0 -I/usr/local/Cellar/atk/2.14.0/include/atk-1.0 -I/usr/local/Cellar/cairo/1.14.0/include/cairo -I/usr/local/Cellar/gdk-pixbuf/2.30.8/include/gdk-pixbuf-2.0 -I/usr/local/Cellar/libpng/1.6.15/include/libpng16 -I/usr/local/Cellar/glib/2.42.1/include/glib-2.0 -I/usr/local/Cellar/glib/2.42.1/lib/glib-2.0/include -I/usr/local/opt/gettext/include 
GTK_LIBS = -L/opt/X11/lib -L/usr/local/Cellar/gtk+3/3.14.5/lib -L/usr/local/Cellar/pango/1.36.8/lib -L/usr/local/Cellar/atk/2.14.0/lib -L/usr/local/Cellar/cairo/1.14.0/lib -L/usr/local/Cellar/gdk-pixbuf/2.30.8/lib -L/usr/local/Cellar/glib/2.42.1/lib -L/usr/local/opt/gettext/lib -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0 -lintl 
ICONV_LIBS = -liconv
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
LDFLAGS = 
LIBICONV = -liconv
LIBOBJS =  ${LIBOBJDIR}lstat$U.o
LIBS = -lcrypto -lssl 
LTLIBICONV = -liconv
LTLIBOBJS =  ${LIBOBJDIR}lstat$U.lo
LUA_CFLAGS = -I/usr/local/include 
LUA_LIBS = -L/usr/local/lib -llua -lm 
MAKEINFO = ${SHELL} /Users/sudheeshsinganamalla/Documents/LakshyaHackathon/RFID-DBSync/cardpeek-0.8.3/missing makeinfo
MKDIR_P = ./install-sh -c -d
OBJEXT = o
PACKAGE = cardpeek
PACKAGE_BUGREPORT = L1L1@gmx.com
PACKAGE_NAME = cardpeek
PACKAGE_STRING = cardpeek 0.8.3
PACKAGE_TARNAME = cardpeek
PACKAGE_URL = 
PACKAGE_VERSION = 0.8.3
PATH_SEPARATOR = :
PCSC_CFLAGS = -Wno-deprecated-declarations -I/System/Library/Frameworks/PCSC.framework/Headers
PCSC_LIBS = -framework PCSC
PKG_CONFIG = /usr/local/bin/pkg-config
PKG_CONFIG_LIBDIR = 
PKG_CONFIG_PATH = /opt/X11/lib/pkgconfig
SET_MAKE = 
SHELL = /bin/sh
STRIP = 
VERSION = 0.8.3
abs_builddir = /Users/sudheeshsinganamalla/Documents/LakshyaHackathon/RFID-DBSync/cardpeek-0.8.3
abs_srcdir = /Users/sudheeshsinganamalla/Documents/LakshyaHackathon/RFID-DBSync/cardpeek-0.8.3
abs_top_builddir = /Users/sudheeshsinganamalla/Documents/LakshyaHackathon/RFID-DBSync/cardpeek-0.8.3
abs_top_srcdir = /Users/sudheeshsinganamalla/Documents/LakshyaHackathon/RFID-DBSync/cardpeek-0.8.3
ac_ct_CC = gcc
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build = x86_64-apple-darwin14.0.0
build_alias = 
build_cpu = x86_64
build_os = darwin14.0.0
build_vendor = apple
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = x86_64-apple-darwin14.0.0
host_alias = 
host_cpu = x86_64
host_os = darwin14.0.0
host_vendor = apple
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /Users/sudheeshsinganamalla/Documents/LakshyaHackathon/RFID-DBSync/cardpeek-0.8.3/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = 
top_builddir = .
top_srcdir = .
AUTOMAKE_OPTIONS = gnu
AM_CFLAGS = -Wall -pedantic -Wno-overlength-strings -I/usr/local/include  -Wno-deprecated-declarations -I/System/Library/Frameworks/PCSC.framework/Headers -I/usr/local/Cellar/glib/2.42.1/include/glib-2.0 -I/usr/local/Cellar/glib/2.42.1/lib/glib-2.0/include -I/usr/local/opt/gettext/include  -D_REENTRANT -I/opt/X11/include -I/opt/X11/include/cairo -I/opt/X11/include/pixman-1 -I/opt/X11/include -I/opt/X11/include/freetype2 -I/opt/X11/include/libpng15 -I/opt/X11/include -I/usr/local/Cellar/gtk+3/3.14.5/include/gtk-3.0 -I/usr/local/Cellar/at-spi2-atk/2.14.1/include/at-spi2-atk/2.0 -I/usr/local/Cellar/at-spi2-core/2.14.1/include/at-spi-2.0 -I/usr/local/Cellar/d-bus/1.8.12/include/dbus-1.0 -I/usr/local/Cellar/d-bus/1.8.12/lib/dbus-1.0/include -I/usr/local/Cellar/gtk+3/3.14.5/include/gtk-3.0 -I/usr/local/Cellar/glib/2.42.1/include/gio-unix-2.0/ -I/usr/local/Cellar/pango/1.36.8/include/pango-1.0 -I/usr/local/Cellar/harfbuzz/0.9.35_1/include/harfbuzz -I/usr/local/Cellar/pango/1.36.8/include/pango-1.0 -I/usr/local/Cellar/atk/2.14.0/include/atk-1.0 -I/usr/local/Cellar/cairo/1.14.0/include/cairo -I/usr/local/Cellar/gdk-pixbuf/2.30.8/include/gdk-pixbuf-2.0 -I/usr/local/Cellar/libpng/1.6.15/include/libpng16 -I/usr/local/Cellar/glib/2.42.1/include/glib-2.0 -I/usr/local/Cellar/glib/2.42.1/lib/glib-2.0/include -I/usr/local/opt/gettext/include   
cardpeek_SOURCES = asn1.c asn1.h bytestring.c bytestring.h gui_flexi_cell_renderer.c gui_flexi_cell_renderer.h dyntree_model.c dyntree_model.h crypto.c crypto.h replay.c replay.h gui.c gui.h iso7816.c iso7816.h lua_nodes.c lua_nodes.h lua_asn1.c lua_asn1.h lua_bit.c lua_bit.h lua_bytes.c lua_bytes.h lua_card.c lua_card.h lua_crypto.c lua_crypto.h lua_ext.c lua_ext.h lua_log.c lua_log.h lua_ui.c lua_ui.h main.c misc.c misc.h pathconfig.c pathconfig.h smartcard.c smartcard.h system_info.c system_info.h a_string.c a_string.h gui_about.c gui_about.h gui_toolbar.c gui_toolbar.h gui_logview.c gui_logview.h gui_cardview.c gui_cardview.h gui_readerview.c gui_readerview.h gui_scratchpad.c gui_scratchpad.h gui_inprogress.c gui_inprogress.h http_download.c http_download.h lua_iconv.c lua_iconv.h cardpeek_update.c cardpeek_update.h cardpeek_public_key.h win32/config.h
doc_DATA = doc/cardpeek_ref.en.pdf 
cardpeek_LDADD = cardpeek_resources.$(OBJEXT) -L/usr/local/lib -llua -lm  -framework PCSC -L/usr/local/Cellar/glib/2.42.1/lib -L/usr/local/opt/gettext/lib -lglib-2.0 -lintl  -L/opt/X11/lib -L/usr/local/Cellar/gtk+3/3.14.5/lib -L/usr/local/Cellar/pango/1.36.8/lib -L/usr/local/Cellar/atk/2.14.0/lib -L/usr/local/Cellar/cairo/1.14.0/lib -L/usr/local/Cellar/gdk-pixbuf/2.30.8/lib -L/usr/local/Cellar/glib/2.42.1/lib -L/usr/local/opt/gettext/lib -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0 -lintl  -lcurl  -liconv
cardpeek_LDFLAGS = -g
#cardpeek_LDFLAGS=-O2
dist_man_MANS = cardpeek.1
DRIVERS = drivers/replay_driver.c  drivers/null_driver.c  drivers/pcsc_driver.c 
ICONS = icons/analyzer.png icons/item.png icons/record.png icons/smartcard.png icons/folder.png icons/cardpeek.png icons/application.png icons/file.png icons/block.png icons/atr.png icons/header.png icons/body.png
CLEANFILES = cardpeek_resources.c dot_cardpeek.tar.gz 
EXTRA_DIST = cardpeek_resources.gresource.xml cardpeek_resources.gresource $(DRIVERS) $(ICONS) dot_cardpeek_dir doc/cardpeek_ref.en.pdf doc/cardpeek_ref.en.odt update_dot_cardpeek_dir.sh script_version.h cardpeek.desktop
desktopdir = $(datadir)/applications
desktop_DATA = cardpeek.desktop
iconsdir = $(datadir)/icons/hicolor/48x48/apps
icons_DATA = icons/cardpeek.png
all: config.h
	$(MAKE) $(AM_MAKEFLAGS) all-am

.SUFFIXES:
.SUFFIXES: .c .o .obj
am--refresh: Makefile
	@:
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      echo ' cd $(srcdir) && $(AUTOMAKE) --gnu'; \
	      $(am__cd) $(srcdir) && $(AUTOMAKE) --gnu \
		&& exit 0; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    echo ' $(SHELL) ./config.status'; \
	    $(SHELL) ./config.status;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	$(SHELL) ./config.status --recheck

$(top_srcdir)/configure:  $(am__configure_deps)
	$(am__cd) $(srcdir) && $(AUTOCONF)
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	$(am__cd) $(srcdir) && $(ACLOCAL) $(ACLOCAL_AMFLAGS)
$(am__aclocal_m4_deps):

config.h: stamp-h1
	@test -f $@ || rm -f stamp-h1
	@test -f $@ || $(MAKE) $(AM_MAKEFLAGS) stamp-h1

stamp-h1: $(srcdir)/config.h.in $(top_builddir)/config.status
	@rm -f stamp-h1
	cd $(top_builddir) && $(SHELL) ./config.status config.h
$(srcdir)/config.h.in:  $(am__configure_deps) 
	($(am__cd) $(top_srcdir) && $(AUTOHEADER))
	rm -f stamp-h1
	touch $@

distclean-hdr:
	-rm -f config.h stamp-h1
install-binPROGRAMS: $(bin_PROGRAMS)
	@$(NORMAL_INSTALL)
	@list='$(bin_PROGRAMS)'; test -n "$(bindir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(bindir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(bindir)" || exit 1; \
	fi; \
	for p in $$list; do echo "$$p $$p"; done | \
	sed 's/$(EXEEXT)$$//' | \
	while read p p1; do if test -f $$p \
	  ; then echo "$$p"; echo "$$p"; else :; fi; \
	done | \
	sed -e 'p;s,.*/,,;n;h' \
	    -e 's|.*|.|' \
	    -e 'p;x;s,.*/,,;s/$(EXEEXT)$$//;$(transform);s/$$/$(EXEEXT)/' | \
	sed 'N;N;N;s,\n, ,g' | \
	$(AWK) 'BEGIN { files["."] = ""; dirs["."] = 1 } \
	  { d=$$3; if (dirs[d] != 1) { print "d", d; dirs[d] = 1 } \
	    if ($$2 == $$4) files[d] = files[d] " " $$1; \
	    else { print "f", $$3 "/" $$4, $$1; } } \
	  END { for (d in files) print "f", d, files[d] }' | \
	while read type dir files; do \
	    if test "$$dir" = .; then dir=; else dir=/$$dir; fi; \
	    test -z "$$files" || { \
	      echo " $(INSTALL_PROGRAM_ENV) $(INSTALL_PROGRAM) $$files '$(DESTDIR)$(bindir)$$dir'"; \
	      $(INSTALL_PROGRAM_ENV) $(INSTALL_PROGRAM) $$files "$(DESTDIR)$(bindir)$$dir" || exit $$?; \
	    } \
	; done

uninstall-binPROGRAMS:
	@$(NORMAL_UNINSTALL)
	@list='$(bin_PROGRAMS)'; test -n "$(bindir)" || list=; \
	files=`for p in $$list; do echo "$$p"; done | \
	  sed -e 'h;s,^.*/,,;s/$(EXEEXT)$$//;$(transform)' \
	      -e 's/$$/$(EXEEXT)/' \
	`; \
	test -n "$$list" || exit 0; \
	echo " ( cd '$(DESTDIR)$(bindir)' && rm -f" $$files ")"; \
	cd "$(DESTDIR)$(bindir)" && rm -f $$files

clean-binPROGRAMS:
	-test -z "$(bin_PROGRAMS)" || rm -f $(bin_PROGRAMS)

cardpeek$(EXEEXT): $(cardpeek_OBJECTS) $(cardpeek_DEPENDENCIES) $(EXTRA_cardpeek_DEPENDENCIES) 
	@rm -f cardpeek$(EXEEXT)
	$(AM_V_CCLD)$(cardpeek_LINK) $(cardpeek_OBJECTS) $(cardpeek_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/a_string.Po
include ./$(DEPDIR)/asn1.Po
include ./$(DEPDIR)/bytestring.Po
include ./$(DEPDIR)/cardpeek_update.Po
include ./$(DEPDIR)/crypto.Po
include ./$(DEPDIR)/dyntree_model.Po
include ./$(DEPDIR)/gui.Po
include ./$(DEPDIR)/gui_about.Po
include ./$(DEPDIR)/gui_cardview.Po
include ./$(DEPDIR)/gui_flexi_cell_renderer.Po
include ./$(DEPDIR)/gui_inprogress.Po
include ./$(DEPDIR)/gui_logview.Po
include ./$(DEPDIR)/gui_readerview.Po
include ./$(DEPDIR)/gui_scratchpad.Po
include ./$(DEPDIR)/gui_toolbar.Po
include ./$(DEPDIR)/http_download.Po
include ./$(DEPDIR)/iso7816.Po
include ./$(DEPDIR)/lua_asn1.Po
include ./$(DEPDIR)/lua_bit.Po
include ./$(DEPDIR)/lua_bytes.Po
include ./$(DEPDIR)/lua_card.Po
include ./$(DEPDIR)/lua_crypto.Po
include ./$(DEPDIR)/lua_ext.Po
include ./$(DEPDIR)/lua_iconv.Po
include ./$(DEPDIR)/lua_log.Po
include ./$(DEPDIR)/lua_nodes.Po
include ./$(DEPDIR)/lua_ui.Po
include ./$(DEPDIR)/main.Po
include ./$(DEPDIR)/misc.Po
include ./$(DEPDIR)/pathconfig.Po
include ./$(DEPDIR)/replay.Po
include ./$(DEPDIR)/smartcard.Po
include ./$(DEPDIR)/system_info.Po

.c.o:
	$(AM_V_CC)$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ $<

.c.obj:
	$(AM_V_CC)$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ `$(CYGPATH_W) '$<'`
install-man1: $(dist_man_MANS)
	@$(NORMAL_INSTALL)
	@list1=''; \
	list2='$(dist_man_MANS)'; \
	test -n "$(man1dir)" \
	  && test -n "`echo $$list1$$list2`" \
	  || exit 0; \
	echo " $(MKDIR_P) '$(DESTDIR)$(man1dir)'"; \
	$(MKDIR_P) "$(DESTDIR)$(man1dir)" || exit 1; \
	{ for i in $$list1; do echo "$$i"; done;  \
	if test -n "$$list2"; then \
	  for i in $$list2; do echo "$$i"; done \
	    | sed -n '/\.1[a-z]*$$/p'; \
	fi; \
	} | while read p; do \
	  if test -f $$p; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; echo "$$p"; \
	done | \
	sed -e 'n;s,.*/,,;p;h;s,.*\.,,;s,^[^1][0-9a-z]*$$,1,;x' \
	      -e 's,\.[0-9a-z]*$$,,;$(transform);G;s,\n,.,' | \
	sed 'N;N;s,\n, ,g' | { \
	list=; while read file base inst; do \
	  if test "$$base" = "$$inst"; then list="$$list $$file"; else \
	    echo " $(INSTALL_DATA) '$$file' '$(DESTDIR)$(man1dir)/$$inst'"; \
	    $(INSTALL_DATA) "$$file" "$(DESTDIR)$(man1dir)/$$inst" || exit $$?; \
	  fi; \
	done; \
	for i in $$list; do echo "$$i"; done | $(am__base_list) | \
	while read files; do \
	  test -z "$$files" || { \
	    echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(man1dir)'"; \
	    $(INSTALL_DATA) $$files "$(DESTDIR)$(man1dir)" || exit $$?; }; \
	done; }

uninstall-man1:
	@$(NORMAL_UNINSTALL)
	@list=''; test -n "$(man1dir)" || exit 0; \
	files=`{ for i in $$list; do echo "$$i"; done; \
	l2='$(dist_man_MANS)'; for i in $$l2; do echo "$$i"; done | \
	  sed -n '/\.1[a-z]*$$/p'; \
	} | sed -e 's,.*/,,;h;s,.*\.,,;s,^[^1][0-9a-z]*$$,1,;x' \
	      -e 's,\.[0-9a-z]*$$,,;$(transform);G;s,\n,.,'`; \
	dir='$(DESTDIR)$(man1dir)'; $(am__uninstall_files_from_dir)
install-desktopDATA: $(desktop_DATA)
	@$(NORMAL_INSTALL)
	@list='$(desktop_DATA)'; test -n "$(desktopdir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(desktopdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(desktopdir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(desktopdir)'"; \
	  $(INSTALL_DATA) $$files "$(DESTDIR)$(desktopdir)" || exit $$?; \
	done

uninstall-desktopDATA:
	@$(NORMAL_UNINSTALL)
	@list='$(desktop_DATA)'; test -n "$(desktopdir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(desktopdir)'; $(am__uninstall_files_from_dir)
install-docDATA: $(doc_DATA)
	@$(NORMAL_INSTALL)
	@list='$(doc_DATA)'; test -n "$(docdir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(docdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(docdir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(docdir)'"; \
	  $(INSTALL_DATA) $$files "$(DESTDIR)$(docdir)" || exit $$?; \
	done

uninstall-docDATA:
	@$(NORMAL_UNINSTALL)
	@list='$(doc_DATA)'; test -n "$(docdir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(docdir)'; $(am__uninstall_files_from_dir)
install-iconsDATA: $(icons_DATA)
	@$(NORMAL_INSTALL)
	@list='$(icons_DATA)'; test -n "$(iconsdir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(iconsdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(iconsdir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(iconsdir)'"; \
	  $(INSTALL_DATA) $$files "$(DESTDIR)$(iconsdir)" || exit $$?; \
	done

uninstall-iconsDATA:
	@$(NORMAL_UNINSTALL)
	@list='$(icons_DATA)'; test -n "$(iconsdir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(iconsdir)'; $(am__uninstall_files_from_dir)

ID: $(am__tagged_files)
	$(am__define_uniq_tagged_files); mkid -fID $$unique
tags: tags-am
TAGS: tags

tags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	set x; \
	here=`pwd`; \
	$(am__define_uniq_tagged_files); \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: ctags-am

CTAGS: ctags
ctags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	$(am__define_uniq_tagged_files); \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"
cscope: cscope.files
	test ! -s cscope.files \
	  || $(CSCOPE) -b -q $(AM_CSCOPEFLAGS) $(CSCOPEFLAGS) -i cscope.files $(CSCOPE_ARGS)
clean-cscope:
	-rm -f cscope.files
cscope.files: clean-cscope cscopelist
cscopelist: cscopelist-am

cscopelist-am: $(am__tagged_files)
	list='$(am__tagged_files)'; \
	case "$(srcdir)" in \
	  [\\/]* | ?:[\\/]*) sdir="$(srcdir)" ;; \
	  *) sdir=$(subdir)/$(srcdir) ;; \
	esac; \
	for i in $$list; do \
	  if test -f "$$i"; then \
	    echo "$(subdir)/$$i"; \
	  else \
	    echo "$$sdir/$$i"; \
	  fi; \
	done >> $(top_builddir)/cscope.files

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags
	-rm -f cscope.out cscope.in.out cscope.po.out cscope.files

distdir: $(DISTFILES)
	$(am__remove_distdir)
	test -d "$(distdir)" || mkdir "$(distdir)"
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
	$(MAKE) $(AM_MAKEFLAGS) \
	  top_distdir="$(top_distdir)" distdir="$(distdir)" \
	  dist-hook
	-test -n "$(am__skip_mode_fix)" \
	|| find "$(distdir)" -type d ! -perm -755 \
		-exec chmod u+rwx,go+rx {} \; -o \
	  ! -type d ! -perm -444 -links 1 -exec chmod a+r {} \; -o \
	  ! -type d ! -perm -400 -exec chmod a+r {} \; -o \
	  ! -type d ! -perm -444 -exec $(install_sh) -c -m a+r {} {} \; \
	|| chmod -R a+r "$(distdir)"
dist-gzip: distdir
	tardir=$(distdir) && $(am__tar) | GZIP=$(GZIP_ENV) gzip -c >$(distdir).tar.gz
	$(am__post_remove_distdir)

dist-bzip2: distdir
	tardir=$(distdir) && $(am__tar) | BZIP2=$${BZIP2--9} bzip2 -c >$(distdir).tar.bz2
	$(am__post_remove_distdir)

dist-lzip: distdir
	tardir=$(distdir) && $(am__tar) | lzip -c $${LZIP_OPT--9} >$(distdir).tar.lz
	$(am__post_remove_distdir)

dist-xz: distdir
	tardir=$(distdir) && $(am__tar) | XZ_OPT=$${XZ_OPT--e} xz -c >$(distdir).tar.xz
	$(am__post_remove_distdir)

dist-tarZ: distdir
	@echo WARNING: "Support for shar distribution archives is" \
	               "deprecated." >&2
	@echo WARNING: "It will be removed altogether in Automake 2.0" >&2
	tardir=$(distdir) && $(am__tar) | compress -c >$(distdir).tar.Z
	$(am__post_remove_distdir)

dist-shar: distdir
	@echo WARNING: "Support for distribution archives compressed with" \
		       "legacy program 'compress' is deprecated." >&2
	@echo WARNING: "It will be removed altogether in Automake 2.0" >&2
	shar $(distdir) | GZIP=$(GZIP_ENV) gzip -c >$(distdir).shar.gz
	$(am__post_remove_distdir)

dist-zip: distdir
	-rm -f $(distdir).zip
	zip -rq $(distdir).zip $(distdir)
	$(am__post_remove_distdir)

dist dist-all:
	$(MAKE) $(AM_MAKEFLAGS) $(DIST_TARGETS) am__post_remove_distdir='@:'
	$(am__post_remove_distdir)

# This target untars the dist file and tries a VPATH configuration.  Then
# it guarantees that the distribution is self-contained by making another
# tarfile.
distcheck: dist
	case '$(DIST_ARCHIVES)' in \
	*.tar.gz*) \
	  GZIP=$(GZIP_ENV) gzip -dc $(distdir).tar.gz | $(am__untar) ;;\
	*.tar.bz2*) \
	  bzip2 -dc $(distdir).tar.bz2 | $(am__untar) ;;\
	*.tar.lz*) \
	  lzip -dc $(distdir).tar.lz | $(am__untar) ;;\
	*.tar.xz*) \
	  xz -dc $(distdir).tar.xz | $(am__untar) ;;\
	*.tar.Z*) \
	  uncompress -c $(distdir).tar.Z | $(am__untar) ;;\
	*.shar.gz*) \
	  GZIP=$(GZIP_ENV) gzip -dc $(distdir).shar.gz | unshar ;;\
	*.zip*) \
	  unzip $(distdir).zip ;;\
	esac
	chmod -R a-w $(distdir)
	chmod u+w $(distdir)
	mkdir $(distdir)/_build $(distdir)/_inst
	chmod a-w $(distdir)
	test -d $(distdir)/_build || exit 0; \
	dc_install_base=`$(am__cd) $(distdir)/_inst && pwd | sed -e 's,^[^:\\/]:[\\/],/,'` \
	  && dc_destdir="$${TMPDIR-/tmp}/am-dc-$$$$/" \
	  && am__cwd=`pwd` \
	  && $(am__cd) $(distdir)/_build \
	  && ../configure \
	    $(AM_DISTCHECK_CONFIGURE_FLAGS) \
	    $(DISTCHECK_CONFIGURE_FLAGS) \
	    --srcdir=.. --prefix="$$dc_install_base" \
	  && $(MAKE) $(AM_MAKEFLAGS) \
	  && $(MAKE) $(AM_MAKEFLAGS) dvi \
	  && $(MAKE) $(AM_MAKEFLAGS) check \
	  && $(MAKE) $(AM_MAKEFLAGS) install \
	  && $(MAKE) $(AM_MAKEFLAGS) installcheck \
	  && $(MAKE) $(AM_MAKEFLAGS) uninstall \
	  && $(MAKE) $(AM_MAKEFLAGS) distuninstallcheck_dir="$$dc_install_base" \
	        distuninstallcheck \
	  && chmod -R a-w "$$dc_install_base" \
	  && ({ \
	       (cd ../.. && umask 077 && mkdir "$$dc_destdir") \
	       && $(MAKE) $(AM_MAKEFLAGS) DESTDIR="$$dc_destdir" install \
	       && $(MAKE) $(AM_MAKEFLAGS) DESTDIR="$$dc_destdir" uninstall \
	       && $(MAKE) $(AM_MAKEFLAGS) DESTDIR="$$dc_destdir" \
	            distuninstallcheck_dir="$$dc_destdir" distuninstallcheck; \
	      } || { rm -rf "$$dc_destdir"; exit 1; }) \
	  && rm -rf "$$dc_destdir" \
	  && $(MAKE) $(AM_MAKEFLAGS) dist \
	  && rm -rf $(DIST_ARCHIVES) \
	  && $(MAKE) $(AM_MAKEFLAGS) distcleancheck \
	  && cd "$$am__cwd" \
	  || exit 1
	$(am__post_remove_distdir)
	@(echo "$(distdir) archives ready for distribution: "; \
	  list='$(DIST_ARCHIVES)'; for i in $$list; do echo $$i; done) | \
	  sed -e 1h -e 1s/./=/g -e 1p -e 1x -e '$$p' -e '$$x'
distuninstallcheck:
	@test -n '$(distuninstallcheck_dir)' || { \
	  echo 'ERROR: trying to run $@ with an empty' \
	       '$$(distuninstallcheck_dir)' >&2; \
	  exit 1; \
	}; \
	$(am__cd) '$(distuninstallcheck_dir)' || { \
	  echo 'ERROR: cannot chdir into $(distuninstallcheck_dir)' >&2; \
	  exit 1; \
	}; \
	test `$(am__distuninstallcheck_listfiles) | wc -l` -eq 0 \
	   || { echo "ERROR: files left after uninstall:" ; \
	        if test -n "$(DESTDIR)"; then \
	          echo "  (check DESTDIR support)"; \
	        fi ; \
	        $(distuninstallcheck_listfiles) ; \
	        exit 1; } >&2
distcleancheck: distclean
	@if test '$(srcdir)' = . ; then \
	  echo "ERROR: distcleancheck can only run from a VPATH build" ; \
	  exit 1 ; \
	fi
	@test `$(distcleancheck_listfiles) | wc -l` -eq 0 \
	  || { echo "ERROR: files left in build directory after distclean:" ; \
	       $(distcleancheck_listfiles) ; \
	       exit 1; } >&2
check-am: all-am
check: check-am
all-am: Makefile $(PROGRAMS) $(MANS) $(DATA) config.h
installdirs:
	for dir in "$(DESTDIR)$(bindir)" "$(DESTDIR)$(man1dir)" "$(DESTDIR)$(desktopdir)" "$(DESTDIR)$(docdir)" "$(DESTDIR)$(iconsdir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-binPROGRAMS clean-generic mostlyclean-am

distclean: distclean-am
	-rm -f $(am__CONFIG_DISTCLEAN_FILES)
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-hdr distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-desktopDATA install-docDATA install-iconsDATA \
	install-man

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am: install-binPROGRAMS

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man: install-man1

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -f $(am__CONFIG_DISTCLEAN_FILES)
	-rm -rf $(top_srcdir)/autom4te.cache
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-local

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-binPROGRAMS uninstall-desktopDATA \
	uninstall-docDATA uninstall-iconsDATA uninstall-man

uninstall-man: uninstall-man1

.MAKE: all install-am install-strip

.PHONY: CTAGS GTAGS TAGS all all-am am--refresh check check-am clean \
	clean-binPROGRAMS clean-cscope clean-generic cscope \
	cscopelist-am ctags ctags-am dist dist-all dist-bzip2 \
	dist-gzip dist-hook dist-lzip dist-shar dist-tarZ dist-xz \
	dist-zip distcheck distclean distclean-compile \
	distclean-generic distclean-hdr distclean-tags distcleancheck \
	distdir distuninstallcheck dvi dvi-am html html-am info \
	info-am install install-am install-binPROGRAMS install-data \
	install-data-am install-desktopDATA install-docDATA \
	install-dvi install-dvi-am install-exec install-exec-am \
	install-html install-html-am install-iconsDATA install-info \
	install-info-am install-man install-man1 install-pdf \
	install-pdf-am install-ps install-ps-am install-strip \
	installcheck installcheck-am installdirs maintainer-clean \
	maintainer-clean-generic mostlyclean mostlyclean-compile \
	mostlyclean-generic mostlyclean-local pdf pdf-am ps ps-am tags \
	tags-am uninstall uninstall-am uninstall-binPROGRAMS \
	uninstall-desktopDATA uninstall-docDATA uninstall-iconsDATA \
	uninstall-man uninstall-man1


mostlyclean-local:
			rm -rf .cardpeek

dist-hook:
			rm -rf `find $(distdir)/ -name .svn`

dot_cardpeek.tar.gz:    dot_cardpeek_dir	
			@echo "  TAR      $<"
			$(AM_V_at)tar czf dot_cardpeek.tar.gz --directory $(srcdir)/dot_cardpeek_dir --exclude=.svn .

cardpeek_resources.$(OBJEXT):	dot_cardpeek.tar.gz $(ICONS) AUTHORS COPYING cardpeek_resources.gresource.xml
			@echo "  GLIB_COMPILE_RESOURCES cardpeek_resources.gresource.xml"
			$(AM_V_at)$(GLIB_COMPILE_RESOURCES) --generate-source --sourcedir=. --sourcedir=$(srcdir) --target=cardpeek_resources.c $(srcdir)/cardpeek_resources.gresource.xml
			$(AM_V_CC)$(COMPILE) -c cardpeek_resources.c

smartcard.$(OBJEXT):	smartcard.c smartcard.h $(DRIVERS)
			$(AM_V_CC)$(COMPILE) -c $<

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
