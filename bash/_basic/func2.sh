#!/bin/bash

echo () # it may cause recursive call, then stack overflow
{
	echo "hello"
}


echo 


