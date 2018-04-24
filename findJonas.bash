#!/bin.bash
FILES=textfiles/*

for f in $FILES
do
	if grep Jonas $f > /dev/null 
	then
		echo ${f:10} 
	fi
done