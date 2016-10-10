#!/bin/bash

TIMEOUT=10
INTERVAL=1


while [ $SECONDS -le $TIMEOUT ]
do 
	if [ "$SECONDS" -eq 1 ]
	then
		units=second
	else
		units=seconds
	fi

	echo "This script has been running for $SECONDS $units."
	
	sleep $INTERVAL
done

echo -e "\a"


