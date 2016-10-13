#!/bin/bash

var1=

while 	echo "previous value=$previous"
		echo
		previous=$var1
		[ "$var1" != "end" ] 
do
	echo "Input the value#1 (end to exit):"
	read var1

	echo "var1: #1 $var1"	
	echo
done


