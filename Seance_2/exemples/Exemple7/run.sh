#! /bin/bash -x

gcc -O2 -Wall -Wextra -pedantic main.c matrice_creuse.c -o mc.exe -lm
time ./mc.exe
