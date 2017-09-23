#!/bin/bash

[ "$1" = "z*" ] && echo "is z*" || echo "not z*"
[ $1 = z* ] && echo "is z*" || echo "not z*"
[[ "$1" = "z*" ]] && echo "is z*" || echo "not z*"
[[ $1 = z* ]] && echo "is z*" || echo "not z*"


