#!/bin/bash

if [ -n "$1" ]
then
	directory=$1
else
	directory=$PWD

fi

for file in $directory/* 
do 
	final_file=${file%.*}
	echo "final_file:$final_file, file:$file"
	mv $file $final_file

done


