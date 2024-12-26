#! /bin/bash

var=$@
g++ $var".cpp" -o $var && "./"$var < input.txt > output.txt && rm $var".exe"