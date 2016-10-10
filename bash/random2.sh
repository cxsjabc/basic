#!/bin/bash

AWKSCRIPT='{srand(); print rand() }'

awk "$AWKSCRIPT"


