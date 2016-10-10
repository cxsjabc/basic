#!/bin/bash

a=1
b=2
[[ $a == 1 && $b == 2 ]]
echo $?
[[ $a = 2 && $b = 2 ]]
echo $?


