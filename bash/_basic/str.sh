#!/bin/bash

var1=abcd12345abc6789
pat=a*c

echo "pat:$pat"

echo '${var1#$pat} =' "${var1#$pat}"
echo '${var1##$pat} =' "${var1##$pat}"


