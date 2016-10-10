#!/bin/bash

LIMIT=10

for ((i=1; i < LIMIT; ++i))
do
	temp="$temp $i"
done

echo "$temp"


