#!/bin/bash

for file in *
do

	if grep -q case $file 2> /dev/null
	then
		echo $file
	fi

done

exit 0
