#!/bin/bash

a=879
echo "The value of \"a\" is $a."

let a=16+5
echo "The value of \"a\" is $a."

b=$a
echo "b:$b"

a=`echo Hello!`
echo $a

a=`ls -l dir1`
echo $a    # no blanks, just space seperate
echo 
echo "$a"  # the normal output

exit 0
