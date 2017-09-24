#!/bin/bash

E_BADARG=65

case $# in
	0 | 1 )
		echo "`basename $0` old_file_suffix new_file_suffix"
		exit $E_BADARG
	;;

esac

for file in *.$1
do 
	mv $file ${file%$1}$2

done

