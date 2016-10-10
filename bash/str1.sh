#!/bin/bash

var=abcd-1234-defg

t=${var#*-*}
echo "t:$t"

t=${var##*-*}
echo "t:$t"

t=${var%*-*}
echo "t:$t"

t=${var%%*-*}
echo "t:$t"

