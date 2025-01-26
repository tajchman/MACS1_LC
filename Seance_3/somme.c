#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n = 20;
    double *v = (double *) malloc(sizeof(double) * n);
    double somme;

    for (i=0; i<n; i++)
        v[i] = sin(i*1.0);

    somme = v[0];
    for (i=1; i<n; i++)
        somme += v[i];

    printf("somme = %lf\n", somme);
    return 0;
}