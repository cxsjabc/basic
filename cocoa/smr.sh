#!/bin/bash

if [ -z "$1" ]
then
	echo "Need argument..."
	exit -1
fi

gcc -I../.. -Wall -g -o $1.elf $1 && ./$1.elf
