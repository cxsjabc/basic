#!/bin/bash

LIMIT=10

for ((a=1, b = 1; a < LIMIT; a++, b++))
do
	echo -ne "$a $b \n"
done


