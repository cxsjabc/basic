#!/bin/bash

if [ -z "$1" ]
then
	echo "Need argument..."
	exit -1
fi

REL_PATH=../../
source common.sh
DEST=$1
shift

# echo "\$\@ is:$@"
if [[ "$@" == *-E* ]]; then
# echo "contains -E"
DEST_ELF=
OUTPUT_FILE="$DEST.precessed"
else
# echo "not contains -E"
DEST_ELF="-o $DEST.elf"
OUTPUT_FILE=
fi

if [ -z $OUTPUT_FILE ]
then
g++ $@ -x c++ -Wall -g ${DEST_ELF} $DEST ${COMMON_C}
else
g++ $@ -x c++ -Wall -g ${DEST_ELF} $DEST ${COMMON_C} > ${OUTPUT_FILE}
fi
if [ $? -eq 0 -a -e $DEST.elf ]; then
./$DEST.elf
fi
