#!/bin/bash

a=0
LIMIT=19

while [ $a -le $LIMIT ]
do
	if [ $a -gt 12 ] 
	then
		let "a += 1"
		break	
	fi

	echo -n "$a "
	
	let "a += 1"
done

echo



