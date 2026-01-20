#! /bin/bash -x

gcc -Wall -Wextra -pedantic main.c -o exec2
time ./exec2 100000000
