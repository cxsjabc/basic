#!/bin/bash

( cd tar.dir && tar cf - . ) | ( cd dest && tar xpvf - )
#cd tar.dir && tar cf - . | cd ../dest 
