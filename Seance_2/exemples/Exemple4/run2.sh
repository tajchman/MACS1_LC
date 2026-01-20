#! /bin/bash -x

options="-Wall -Wextra -pedantic"
export CC=gcc-14

for i in constexpr
do
  for version in c89 c99 c11 c17 c23
  do
    $CC -std=$version $options ./$i.c -o ./$i.exe
  done
done
