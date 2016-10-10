#!/bin/bash

if [ $# -lt 2 ]; then
	echo "Arguments missing..."
	exit 1
fi

NAME_PREFIX=$2
FOLDER=$1

# pushd . &>/dev/null
cd $FOLDER

for file in * ; do 
	mv $file  ${NAME_PREFIX}${file}

done

# popd &>/dev/null

exit 0


