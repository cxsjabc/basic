#!/bin/bash

FILE=redirect.in

{
	read line1
	read line2
} < $FILE

echo "First line in $$FILE $FILE is: $line1"
echo "Second line in $FILE is: $line2"
echo


exit 0
