#!/bin/bash

case $(arch) in

i386) echo "80386-based machine";;
i486) echo "80486-based machine";;
*) 		echo "other type of machine";;

esac

exit 0



