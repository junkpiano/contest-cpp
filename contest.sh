#!/bin/bash

DIR=$1
mkdir -p $DIR

for i in a b c e d f
do
 cp t.cpp $DIR/$i.cpp
done
touch $DIR/input.txt

echo "You are ready for $1!"
