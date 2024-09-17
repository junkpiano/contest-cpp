#!/bin/bash

DIR=$1
mkdir -p $DIR
cp t.cpp $DIR/solve.cpp
touch $DIR/input.txt

echo "You are ready for $1!"
