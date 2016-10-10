#!/bin/bash

if cmp $1 $2 &> /dev/null
then
	echo "$1 is equal to $2."
else
	echo "$1 isn't equal to $2."
fi
