#!/bin/bash

read var1 < $1
echo "var1=$var1"

read var2 var3 < $1
echo "var2: $var2, var3:$var3"


