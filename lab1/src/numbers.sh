#!/bin/bash 
for((i=0;i<155;i++))
do 
od -vAn -N1 -tu1 < /dev/random >> number.txt 
done
