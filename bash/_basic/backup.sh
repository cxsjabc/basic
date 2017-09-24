#!/bin/bash

BACKUPFILE=backup-$(date +%Y-%m-%d-%H:%M:%S)

archive=${BACKUPFILE}

tar cvf $archive `find . -name "*.sh"` &> /dev/null
