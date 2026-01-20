#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    char *end = NULL;
    long n, i;
    double *u , *v;
    double somme, pi;

    n = argc > 1 ? strtol(argv[1], &end, 10) : 20L;

    if (end && *end != '\0') {
        printf("erreur entier attendu\n");
        exit(-1);
    }

    u = (double *) malloc(n*sizeof(double));
    v = (double *) malloc(n*sizeof(double));
    if (u == NULL || v == NULL) {
        printf("pas assez de mémoire\n");
        exit(-2);
    }
    
    pi = atan(1.0) * 4;
    for (i = 0; i<n; i++) {
        u[i] = sin(i*2*pi/n);
        v[i] = cos(i*2*pi/n);
    }

    somme = 0.0;
    for (i = 0; i<n; i++) {
        somme += u[i]*v[i];
    }
    printf("n = %ld somme = %lg\n", n, somme);

    free(u);
    free(v);
}