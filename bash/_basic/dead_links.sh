#!/bin/bash

[ $# -eq 0 ] && dirs=`pwd` || dirs=$@


chkdir() {
	for file in $1/* ; do 
		if [ -d "$file" ] ; then
			chkdir "$file"
		else
			[ -h "$file" -a ! -e "$file" ] && echo "$file not exist!" 
		fi

	done	

}


for dir in $dirs; do 
	chkdir "$dir";

	#if [ -d "$dir" ]; then
	#	chkdir "$dir";
	#else
	#	echo "Not directory, ignore..."
	#fi
	

done



