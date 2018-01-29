#!/bin/bash

if [ -z "$1" ]
then
	echo "Need argument..."
	exit -1
fi

REL_PATH=../../../
#COMMON_C="../../common/common.c ../../common/gen.c ../../common/arr.c"
source common.sh
#echo "COMMON_C:${COMMON_C}"

DEST=$1
shift

# i386
gcc $@ -arch i386 -Wall -g -o $DEST.elf $DEST ${COMMON_C} && ./$DEST.elf
# gcc $@ -Wall -g -o $DEST.elf $DEST ${COMMON_C} && ./$DEST.elf
