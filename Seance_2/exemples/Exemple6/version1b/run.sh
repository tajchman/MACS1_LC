#! /bin/bash -x

gcc -O2 -Wall -Wextra -pedantic main.c -o v1b.exe -lm
time ./v1b.exe 10000
