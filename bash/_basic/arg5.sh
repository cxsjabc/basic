#!/bin/bash

set -- "first" "second" "third:one" "" "fifth: :one"

echo "args: \"$*\""

IFS=:  # can comment

var=$@
c=0
for i in "$var"		# "$*", $*, $@, "$@"
do 
	echo "$((c+=1)); [$i]"
done


