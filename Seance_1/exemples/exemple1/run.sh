#! /bin/bash -x

gcc ex1.c -o ex1
./ex1

gcc -E ex1.c -o ex1_b.c
gcc -S ex1_b.c -o ex1_b.s
gcc -c ex1_b.s ex1_b.o
gcc ex1_b.o -o ex1_b

./ex1_b
