#!/bin/bash

i=1

#RANDOM=6

while [ $i -le 10 ]
do
n=$((RANDOM % 6))
echo -n "$n "
let "i+=1"
done

