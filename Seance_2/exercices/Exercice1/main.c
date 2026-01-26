#include "matrice_creuse.h"

int main(int argc, char **argv)
{
    const char *fileName;

    if (argc > 1)
       fileName = argv[1];
    else
       fileName = "m1.mtx";

    sparseMatrix M;
    readSparseMatrix(&M, fileName);

    printf("\nAvant transposition:\n");
    printSparseMatrix(&M);

    transposeSparseMatrix(&M);

    printf("\nApres transposition:\n");
    printSparseMatrix(&M);

    freeSparseMatrix(&M);

    return 0;
}
