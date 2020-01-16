#!/bin/bash
NUM=10
echo "3.01 + 4" | bc
echo "obase=2;$NUM" | bc

NUM1=1010
echo "obase=10;ibase=10;$NUM1" | bc

NUM2=20
result=`echo "obase=8;ibase=2;$NUM2" | bc`
echo $NUM2
echo "sqrt(100)" | bc
