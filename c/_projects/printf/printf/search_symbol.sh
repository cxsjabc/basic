#!/bin/bash

FILES=`find /usr/lib -name "*.dylib"`
for file in $FILES
do
	# echo "file:$file"
	nm $file | grep "T _printf"
	if [ $? -eq 0 ]; then
		echo "file: $file contains printf."
	fi
done
