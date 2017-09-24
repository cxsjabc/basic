#!/bin/bash

read var

if echo "$var" | grep -q txt
then
	echo "$var contains \"txt\"!"
fi

if [[ $var = *txt* ]]
then
	echo "$var contains \"txt\"!"
fi




