#! /bin/bash -x

gcc -O2 -Wall -Wextra -pedantic main.c -o v1.exe -lm
time ./v1.exe 10000
