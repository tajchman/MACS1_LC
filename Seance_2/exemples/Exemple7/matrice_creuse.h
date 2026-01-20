#include <stdlib.h>

typedef struct {
    size_t nc;  /* nombre de coefficients non nuls */
    int * I;    /* indices de lignes */
    int * J;    /* indices de colonnes */
    double * V; /* valeur des coefficients */
    int n, m;   /* nombre de lignes/colonnes */
} sparseMatrix;

void readSparseMatrix(sparseMatrix *M, const char *fileName);
void newSparseMatrix(sparseMatrix *M, int n, int m, size_t nc);
void freeSparseMatrix(sparseMatrix *M);
