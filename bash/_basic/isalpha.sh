#!/bin/bash

SUCCESS=0
FAILURE=-1

isalpha()
{
	if [ -z "$1" ]; then
		return $FAILURE;
	fi

	case "$1" in
	[a-zA-Z]* )	return $SUCCESS;;
	*)			return $FAILURE;;
	esac
}

isalpha2()
{
	if [ -z "$1" ]; then
		return $FAILURE;
	fi

	case "$1" in
	*[!a-zA-Z]*|"") return $FAILURE;;
	*)				return $SUCCESS;;

	esac
}

isdigit()
{
	[ $# -eq 1 ] || return $FAILURE;

	case "$1" in
	*[!0-9]*) return $FAILURE;;
	*)			return $SUCCESS;;
	esac

}

check_var()
{
	if isalpha "$@"
	then
		echo "\"$*\" begins with an alpha character."
		if isalpha2 "$@"
		then
			echo "\"$*\" all alpha characters."
		else
			echo "\"$*\" not all alpha characters."
		fi
	else
		echo "\"$*\" begins with non-alpha character"
	fi
}

check_digit()
{
	if isdigit "$@"
	then
		echo "\"$*\" contains only digits [0-9]."
	else
		echo "\"$*\" has at least one non-digit characters."
	fi
}

a=23skidoo
b=H3llo
c=-What?
d=What?
e=`echo $b`
f=AbcDef
g=27234
h=27a34
i=27.34

check_var $a
check_var $b
check_var $c
check_var $d
check_var $e
check_var $f
check_var

check_digit $g
check_digit $h
check_digit $i


exit 0

