#! /bin/bash -x

# compilation
gcc exemple2a.c -o exemple2a.exe
gcc exemple2b.c -o exemple2b.exe

# exécution
time ./exemple2a.exe < input > outa
time ./exemple2b.exe < input > outb
