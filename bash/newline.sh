#!/bin/bash

echo "Why \n "

echo $"A line of text 
a linefeed."

echo "Two
Lines."

s1=$"Yet another line of
a linefeed"   # just one line, because the str is assigned to a variable

echo $s1


