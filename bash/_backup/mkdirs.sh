#!/bin/bash

i=5
while [ $i -gt 0 ]
do
	mkdir hello
	cd hello
	let "i=$i - 1"
done
