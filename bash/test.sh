#!/bin/bash

if /bin/test -z "$1"
then
	echo "No command."
else
	echo "First command arg:$1"
fi

arg=1
if /bin/[ -z $arg ; then echo "null" ; else echo "not null"; fi
if /bin/[ -z $arg ] ; then echo "null" ; else echo "not null"; fi
arg=
if /bin/[ -z $arg ] ; then echo "null" ; else echo "not null"; fi

