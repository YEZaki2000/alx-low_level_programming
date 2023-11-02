#!/bin/bash
myargs=$#
for myarg in {1..$myargs}
do
	echo $myarg
	find . -name myarg
done
