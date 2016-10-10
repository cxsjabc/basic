#!/bin/bash

path_name=/home/eyu/xiongxiong/maomao

t=${path_name##/*/}
echo "t:$t"

t=${path_name%/}
echo "t:$t"


