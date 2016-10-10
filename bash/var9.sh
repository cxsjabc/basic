#!/bin/bash


n=1
((++n))
echo $n

: $((++n))
echo $n
