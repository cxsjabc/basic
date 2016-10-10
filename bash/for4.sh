#!/bin/bash

for file in "$1"/*
do
	echo "$file"
done | sort >> $2

exit 0


