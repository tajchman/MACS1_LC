#! /bin/bash -x

gcc -c A.c
gcc -c B.c
gcc -c main.c
gcc A.o B.o main.o -o exemple2.exe

