#! /bin/bash -x

gcc -O2 -Wall -Wextra -pedantic main.c -o v3.exe -lm
time ./v3.exe 10000
