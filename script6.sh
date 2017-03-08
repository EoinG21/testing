#!/bin/bash
cat $1
cat $2

touch temp

cp $1 temp
cp $2 $1
cp temp $2

rm temp

cat $1
cat $2
