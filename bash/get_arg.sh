#!/bin/bash

# eg: xxx.sh /test1=value1 /test2=value2 ...

i=0
until [ -z $1 ]
do 
	arg=${1:1}
	key=${arg%%=*}
	value=${arg##*=}
	echo "key:$key, value:$value"
	
	eval $key=$value

	shift
	let "i++"
done


j=1
while [ $j -le $i ]
do 
    key=test$j	
	# echo "$key: ${$key}" # script error
	let "j++"

done

