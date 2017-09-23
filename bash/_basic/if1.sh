#!/bin/bash

if [ 0 ]
then
	echo "succeed!"
else
	echo "failed!"
fi

if [ 1 ]  # why?
then
	echo "succeed!"
else
	echo "failed!"
fi

if [ ]  
then
	echo "succeed!"
else
	echo "failed!"
fi

if [ xyz ]  
then
	echo "succeed!"
else
	echo "failed!"
fi

if [ $xyz ]  
then
	echo "succeed!"
else
	echo "failed!"
fi

xyz=1
if [ $xyz ]  
then
	echo "succeed!"
else
	echo "failed!"
fi
