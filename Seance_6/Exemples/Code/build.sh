#! /bin/bash -x

gcc ${MODE} -Wall -pedantic -Wextra -I types -c types/vecteur.c -o types/vecteur.o
gcc ${MODE} -Wall -pedantic -Wextra -I types -c types/matrice.c -o types/matrice.o
gcc ${MODE} -Wall -pedantic -Wextra -I types -c types/operations.c -o types/operations.o
gcc ${MODE} -Wall -pedantic -Wextra -I types -c main.c -o main.o
gcc ${MODE} -Wall -pedantic -Wextra main.o types/vecteur.o types/matrice.o types/operations.o -o ex6.exe
