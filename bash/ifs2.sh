#!/bin/bash

OIFS=$IFS;  IFS=:
while read name passwd uid gid fullname ignore
do
  echo "$name ($fullname)"

done < /etc/passwd

IFS=$OIFS

