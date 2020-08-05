#!/bin/bash

S=

if [ $# -lt 1 ]; then 
	echo "argument missing"; exit 13
fi

C=$1

while [ $C -gt 0 ]
	do
		for i in {a..j}
	do
		S=$S$i
	done

	let C--
done

echo $S
