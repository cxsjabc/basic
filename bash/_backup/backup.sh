#!/bin/bash

BACKUPFILE=backup-$(date +%Y-%m-%d)

archive=${BACKUPFILE}

tar cvf $archive `find . -name "*.sh"`
