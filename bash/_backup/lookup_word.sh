#!/bin/bash

file=words

while [ "$word" != ZZZZZ ]
do
	read word
	
	if [ "$word" == "" ]; then break; 
	fi
 
	look $word 2>&1 > /dev/null

	if [ $? -eq 0 ]
	then
		echo "$word is valid"
	else
		echo "$word is invalid"
	fi
done < "$file"
#done
