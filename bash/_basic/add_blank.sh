#!/bin/bash

MINLEN=3

while read line
do 
	echo "$line"
	len=${#line}
	if [ $len -lt $MINLEN ]
	then echo 
	fi

done


