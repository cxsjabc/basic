#!/bin/bash

#PS3='Choose your favorite vegetale: '
echo

select vegetable in "beans" "carrots" "potatoes"
do
	echo
	echo "Your favorite is:$vegetable."
	echo "Yuch!"
	echo

	break
	
done

exit 0


