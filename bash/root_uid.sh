#!/bin/bash

ROOT_UID=0

if [ $UID -eq $ROOT_UID ]
then
	echo "You are root!"
else
	echo "You are ordinary user(But mom loves you as the same)"

fi


