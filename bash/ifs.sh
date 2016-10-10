#!/bin/bash

out_args()
{
	for arg
	do
		echo "$arg"

	done
}


IFS=" "
var="a  b c  "
out_args $var

IFS=:
var=":a::b:c:::"
out_args $var

