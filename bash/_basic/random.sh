#!/bin/bash

N=6
a1=0
a2=0

let "a1 = $RANDOM % $N + 1"
let "a2 = $RANDOM % $N + 1"

echo "a1:$a1, a2:$a2"

let "throw = a1 + a2"
echo "throw:$throw"

