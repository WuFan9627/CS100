#!/bin/bash
read A B C D E F G
if [ -z "$C" ];then
        echo "too fewer figures"
        exit
else
        if [ -n "$D" ];then
                echo "too many figures"
        exit
        else
                 echo "ok"
        fi
fi
if [ $A -ge $B ];then
  MAX=$A
else
  MAX=$B
fi
if [ $MAX -le $C ];then
  MAX=$C
fi
echo "The max is $MAX"
