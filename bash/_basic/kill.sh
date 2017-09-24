#!/bin/bash

timeron()
{
	sleep 3 && kill -s 9 $$ &
}

echo "Start..."
timeron
read
echo "End..."


