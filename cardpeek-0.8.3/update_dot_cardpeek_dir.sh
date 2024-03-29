#/bin/bash

VERSION=`date +%s`

SOURCE_DST=`pwd`

if [ "x$CARDPEEK_DST"="x" ]
then
	DOT_CARDPEEK_SRC=~/.cardpeek
else
	DOT_CARDPEEK_SRC=$CARDPEEK_DST
fi

DOT_CARDPEEK_DST="$SOURCE_DST/dot_cardpeek_dir"

MODIFIED='no'

case "$1"
in
    dryrun)
    TODO=dryrun
    ;;
    update)
    TODO=update
    ;;
    *)
    echo "Usage: $0 [dryrun|update]"
    echo "  'dryrun' just prints what the script would do, without actually doing it."     
    echo "  'update' actually does the work."
    exit
    ;;
esac


if [ -d "$DOT_CARDPEEK_SRC" ]; then
  
  cd $DOT_CARDPEEK_SRC

  echo "## Retrieving new files:"
  IFS=$'\t\n' 
  for i in `find * \! -path replay/\* \! -path scripts.old\*`;
  do
     if [ -d "$i" ]; then
        if [ ! -e "$DOT_CARDPEEK_DST/$i" ]; then
            echo "!! creating dir $DOT_CARDPEEK_DST/$i"
            if [ $TODO = "update" ]; then
                mkdir -p "$DOT_CARDPEEK_DST/$i"
                MODIFIED='yes'
            fi 
        fi
     elif test ! -e "$DOT_CARDPEEK_DST/$i" || (diff -q "$i" "$DOT_CARDPEEK_DST/$i" | grep differ) &> /dev/null; then
        if [ "$i" -nt "$DOT_CARDPEEK_DST/$i" ]; then
            echo ">> $DOT_CARDPEEK_SRC/$i will be copied to $DOT_CARDPEEK_DST/$i"
            if [ $TODO = "update" ]; then
                cp -pRv "$i" "$DOT_CARDPEEK_DST/$i"
                MODIFIED='yes' 
            fi
        elif [ "$i" -ot "$DOT_CARDPEEK_DST/$i" ]; then
            echo "<< $DOT_CARDPEEK_SRC/$i will be replaced by $DOT_CARDPEEK_DST/$i"
            if [ $TODO = "update" ]; then
                cp -pRv "$DOT_CARDPEEK_DST/$i" "$i"
                MODIFIED='yes' 
            fi
        fi
     fi
  done 

  if [ "$TODO" = "update" ]; then
     if [ "$MODIFIED" = 'yes' ]; then
        echo "## Removing unecessary files and updating directory modfication time:"
        rm -vf $DOT_CARDPEEK_DST/replay/* 
        touch $DOT_CARDPEEK_DST

        echo "## Set version info:"
        echo "   Version ID is now $VERSION"
        echo $VERSION > $DOT_CARDPEEK_DST/version
        echo $VERSION > $DOT_CARDPEEK_SRC/version
        cat > "$SOURCE_DST/script_version.h" << __EOF
#ifndef SCRIPT_VERSION_H
#define SCRIPT_VERSION_H

#define SCRIPT_VERSION $VERSION

#endif
__EOF
     else
        echo "## No updates performed."
     fi
  fi
  echo "## Done"
else
  echo "Error: ~/.cardpeek does not exist. Doing nothing"
fi
