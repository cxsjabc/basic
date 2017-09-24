#!/bin/bash

TIMEOUT=3
COMMAND="sleep 10"

# ${COMMAND} 
`$COMMAND` &  sleep $TIMEOUT; kill -9 $! &> /dev/null; 

