#!/bin/bash

arrowup='\[A'

echo -n "Press a key..."
read -n3 key

echo -n $key | grep "$arrowup"
if [ $? -eq 0 ]
then
	echo "Up key pressed!"
	exit 0

fi


