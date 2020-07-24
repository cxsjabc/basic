#!/bin/bash

FILE=
if [ "$1" = "" ]; then
	FILE="hello"
else
	FILE=$1
fi

nasm -gdwarf -f macho64 -o $FILE.o $FILE &&
ld -o $FILE.elf -e _main $FILE.o -lc -lSystem -macosx_version_min 10.14 &&
./$FILE.elf
