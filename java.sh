#! /bin/bash

var=$@
javac $var".java" && java $var < "input.txt" > "output.txt" && rm $var".class"