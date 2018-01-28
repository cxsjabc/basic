#!/bin/bash

FILE=
if [ "$1" = "" ]; then
	FILE="hello"
else
	FILE=$1
fi

nasm -f macho64 -o $FILE.o $FILE.asm &&
ld -o $FILE.elf -e _main $FILE.o &&
./$FILE.elf
