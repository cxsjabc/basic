#!/bin/bash

echo "input person:"
read person

case "$person" in
	"X" | "x" )
		echo "Xiyi's home"
		echo "eyu should be guai guai"

	 ;;

	"M" | "m" )
		echo "Maomao's home"	
		echo "Big cats and small cats are both cats."
	 ;;

	* )
		echo "Not ready"
	;;

esac

echo 

exit 0


