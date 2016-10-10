#!/bin/bash

xyz23=whatever
xyz24=how

a=${!xyz*}
echo $a

a=${!xyz@}
echo $a


