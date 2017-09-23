#!/bin/bash

a=0
LIMIT=19

while [ $a -le $LIMIT ]
do
	if [ $a -eq 3 -o $a -eq 11 ]
	then
		let "a += 1"
		continue
	fi

	echo -n "$a "
	
	let "a += 1"
done

echo



