#!/bin/bash

PIDS=$(pidof sh $0) # a pity that mac doesn't contain pidof command
echo "$PIDS"
P_array=($PIDS)
echo $P_array
let "instances = ${#P_array[*] - 1}"
echo "instances:$instances"
sleep 1
sh $0


exit 0


