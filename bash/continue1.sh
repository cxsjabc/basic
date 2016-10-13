#!/bin/bash

a=0
LIMIT=19

for i in 1 2 3
do
	echo "loop: $i"
	
	for j in 1 2 3
	do
		echo "  loop: $j"

		if [ $j -eq 2 ]
		then
			continue 2
		fi	

	done
	

done
