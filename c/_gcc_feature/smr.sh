#!/bin/bash

if [ -z $1 ]
then
	echo "No argument..."
	exit -1
fi

DEST=$1

shift

gcc $@ -o $DEST.simple.elf $DEST

if [ $? -eq 0 ]
then
./$DEST.simple.elf
fi
