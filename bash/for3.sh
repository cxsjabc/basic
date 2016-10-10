#!/bin/bash

FILES="/bin/ls
/usr/bin/fakefile"

for file in $FILES
do 
	if [ ! -e "$file" ]
	then
		echo "$file not exist!"
		continue

	fi

	ls -l $file | awk '{print $9 "  file size:" $5}'
	whatis `basename $file`
	
	echo
done




