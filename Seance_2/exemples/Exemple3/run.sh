#! /bin/bash -x

for i in macro
do
  gcc -Wall -Wextra -pedantic ./$i.c -o ./$i.exe
  
  ./$i.exe
done
