#!/bin/bash

if [ -z "$1" ]
then
	echo "Need argument..."
	exit -1
fi

REL_PATH=../../
#COMMON_C="../../common/common.c ../../common/gen.c ../../common/arr.c"
source common.sh
#echo "COMMON_C:${COMMON_C}"

EXTRA_ARGS="-I/usr/local/brew-1.2.3/Cellar/mysql/5.7.19/include/mysql -DNOUSE_XI_LIST -L/usr/local/brew-1.2.3/lib -lmysqlclient"

DEST=$1
shift

gcc $@ -Wall -g -o $DEST.elf $DEST ${COMMON_C} ${EXTRA_ARGS} && ./$DEST.elf
