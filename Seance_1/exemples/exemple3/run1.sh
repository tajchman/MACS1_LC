#! /bin/bash -x

gcc ex3a.c -o ex3a
gcc -Wconversion -Wall -Wextra ex3a.c -o ex3a
./ex3a

gcc -Wconversion -Wall -Wextra ex3b.c -o ex3b
./ex3b

gcc -Wconversion -Wall -Wextra ex3c.c -o ex3c
./ex3c
