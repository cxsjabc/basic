#!/bin/bash

var1=20
var2=22

[ $var1 -ne $var2 ] && echo "$var1 != $var2"

[ -d /home/noexist ] || echo "/home/noexist not exist"


