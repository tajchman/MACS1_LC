#include "vecteur.h"
#include "matrice.h"
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    char *end = NULL;
    long n, m, i, j;
    double somme, pi;

    n = argc > 1 ? strtol(argv[1], &end, 10) : 20L;
    if (end && *end != '\0') {
        printf("erreur entier attendu\n");
        exit(-1);
    }
    m = 2*n;

    new_vector(u, double, n);
    new_vector(v, double, m);
    new_matrix(M, double, n, m);

    pi = atan(1.0) * 4;
    for (i = 0; i<n; i++) {
        u[i] = sin(i*2*pi/n);
    }

    for (i = 0; i<m; i++) {
        v[i] = cos(i*2*pi/m);
    }

    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            M[i][j]= 1./(i+j+1.0);

    somme = 0.0;
    for (i = 0; i<n; i++)
        for (j=0; j<m; j++)
            somme += u[i]* M[i][j] * v[j];
    
    printf("n = %ld somme = %lg\n", n, somme);


    delete_matrix(M);
    delete_vector(v);
    delete_vector(u);

    return 0;
}