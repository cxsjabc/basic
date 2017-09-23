#!/bin/bash

hello="A B  C"
echo "|"$hello"|"
echo $hello
echo "$hello"

hello=hello
echo "\$hello (null value) = $hello"
unset hello
echo "\$hello (null value) = $hello"

