#!/bin/bash

PS3='Please select the vegetable:'
echo

choice_of()
{
	select vegetable
	do
		echo "You select: $vegetable."
		echo "..."

	done
}

choice_of rice potatoes tomatoes


exit 0


