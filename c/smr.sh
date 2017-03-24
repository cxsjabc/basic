#!/bin/bash

if [ -z $1 ]
then
	echo "No argument..."
	exit -1
fi

gcc -o $1.c.simple.elf $1.c

if [ $? -eq 0 ]
then
./$1.c.simple.elf
fi
