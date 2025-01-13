#! /bin/bash -x

gcc -c A.c -o A.o
gcc -c B.c -o B.o
gcc -c C.c -o C.o
gcc A.o B.o C.o -o ex2b

./ex2b