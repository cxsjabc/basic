#!/bin/bash

if [ -n $1 ]
then
	echo "Parameter #1 is $1"
fi

if [ -n $2 ]
then
	echo "Parameter #2 is $2"
fi

echo ${10}

echo "All arguments is:$*"
