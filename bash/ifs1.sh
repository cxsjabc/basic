#!/bin/bash

echo_arg()
{
	echo "$1,$2,$3"
}

IFS=""
set a b c

echo_arg $@


