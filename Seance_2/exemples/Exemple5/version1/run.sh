#! /bin/bash -x

gcc -Wall -Wextra -pedantic main.c -o exec1
time ./exec1 100000000
