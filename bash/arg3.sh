#!/bin/bash

E_BADARG=65

index=1
for arg in "$*"
do 
	echo "Arg #$index = $arg"
	let "index++"
done

index=1
for arg in $*
do 
	echo "Arg #$index = $arg"
	let "index++"
done

index=1
for arg in $@
do 
	echo "Arg #$index = $arg"
	let "index++"
done

index=1
for arg in "$@"
do 
	echo "Arg #$index = $arg"
	let "index++"
done
