#!/bin/bash

echo "窓は閉めましたよね？(y/n)"
while true
do
  read c 
  if [ $c != "y" ]; then
    echo "窓を閉めてください。鳩が入ります。"
  else
    break
  fi
done
echo "お疲れ様でした。"
