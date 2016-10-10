#!/bin/bash

func1()
{
	echo This is a function.
}

declare -f
echo 

declare -i var1	
var1=2367
var1=$var1+1
echo "var1:$var1"

var1=2367.1   # assign a float-point num to int, error
echo "var1:$var1"

declare -r var2=13.36
var2=13.37

exit 0
