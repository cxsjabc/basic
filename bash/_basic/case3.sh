#!/bin/bash

while [ $# -gt 0 ]; do
	case "$1" in
		-d|--debug)
			DEBUG=1
			;;
		-c|--conf)
			CONFILE="$2"
			shift
			if [ ! -f "$CONFILE" ]; then
				echo "file not exist!"
				exit -2
			fi
	esac
	
	shift

done

echo "debug:$DEBUG, confile:$CONFILE"

