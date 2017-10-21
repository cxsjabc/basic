#!/bin/bash

if [ -z $1 ]
then
	echo "No argument..."
	exit -1
fi

DEST=${1%.*}

EXTRA_ARGS=-I/usr/local/brew-1.2.3/Cellar/mysql/5.7.19/include/mysql -DNOUSE_XI_LIST -L/usr/local/brew-1.2.3/lib -lmysqlclient

gcc -o $1.simple.elf $1 ${EXTRA_ARGS}

if [ $? -eq 0 ]
then
./$1.simple.elf
fi
