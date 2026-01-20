#! /bin/bash -x

options="-Wall -Wextra -pedantic"

for i in const
do
  gcc $options ./$i.c -o ./$i.exe || break
  
  ./$i.exe
done
