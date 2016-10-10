#!/bin/bash

a=letter
letter=z

#echo "\$$a"
eval a=\$$a
echo "$a"

