#!/bin/bash

if [ -z "$1" ]
then
	echo "Need argument..."
	exit -1
fi

REL_PATH=../../../../
#COMMON_C="../../common/common.c ../../common/gen.c ../../common/arr.c"
source common.sh
#echo "COMMON_C:${COMMON_C}"

CC=gcc

DEST=$1
shift

$CC $@ -Wall -g -Os -o $DEST.elf $DEST ${COMMON_C} && ./$DEST.elf
