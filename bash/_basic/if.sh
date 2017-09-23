#!/bin/bash

read a
read b
read c

if [ $a -eq $b -a $a -eq $c ] ; then
	echo "a is equal to b and c!"
else
	echo "a is not equal to b and c!"
fi
