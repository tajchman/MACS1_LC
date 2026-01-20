#include "vecteur.h"
#include "matrice_creuse.h"
#include <stdio.h>
#include <math.h>


int main(int argc, char **argv)
{
    const char *fileName;
    long n, m, i;
    size_t ic;
    double somme, pi;

    if (argc > 1)
       fileName = argv[1];
    else
       fileName = "bcsstk01.mtx";

    sparseMatrix M;
    readSparseMatrix(&M, fileName);

    n = M.n;
    m = M.m;

    new_vector(u, double, n);
    pi = atan(1.0) * 4;
    for (i = 0; i<n; i++) {
        u[i] = sin(i*2*pi/n);
    }

    new_vector(v, double, m);
    for (i = 0; i<m; i++) {
        v[i] = cos(i*2*pi/m);
    }

    somme = 0.0;
    for (ic=0; ic<M.nc; ic++)
        somme += u[M.I[ic]]* M.V[ic] * v[M.J[ic]];
    
    printf("somme = %lg\n", somme);

    freeSparseMatrix(&M);
    delete_vector(v);
    delete_vector(u);

    return 0;
}
