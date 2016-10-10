#!/bin/bash

a=2334
let "a+=1"
echo "a:$a"
echo

b=${a/23/BB} # replace 23 with BB from string $a
echo "b:$b"
declare -i b
echo "b:$b"

let "b+=1"
echo "b:$b"
echo
