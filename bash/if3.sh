#!/bin/bash

dir=$1

if cd $dir 2>/dev/null; then
	echo "now in $dir"
else
	echo "can't change to $dir"
fi


