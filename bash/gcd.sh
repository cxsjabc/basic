#!/bin/bash

[ $# -lt 2 ] && ( echo "arguments missing" ; exit -1 )
#echo "Start..."

gcd() {
	divident=$1
	divider=$2

	remainer=1

	until [ $remainer -eq 0 ]; do 
		let "remainer=$divident % $divider"
		let "divident=$divider"
		let "divider=$remainer"
	done

}



gcd $1 $2
echo "gcd($1,$2) is: $divident"


