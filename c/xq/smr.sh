#!/bin/bash

if [ -z $1 ]
then
	echo "No argument..."
	exit -1
fi

DEST=${1%.*}

gcc -arch i386 -o $1.simple.elf $1

if [ $? -eq 0 ]
then
./$1.simple.elf
fi
