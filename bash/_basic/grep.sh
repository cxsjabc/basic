#!/bin/bash

if echo $1 | grep -q $1
then
	echo "$1 is in file $2,"
else
	echo "$1 isn't in file $2,"
fi


