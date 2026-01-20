#! /bin/bash -x

gcc -O2 -Wall -Wextra -pedantic main.c -o v2.exe -lm
time ./v2.exe 10000
