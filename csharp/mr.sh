#!/bin/bash

if [ -z "$1" ]
then
	echo "Need argument..."
	exit -1
fi


DEST=$1
shift

csc /out:${DEST%.*}.exe $DEST
mono ${DEST%.*}.exe

