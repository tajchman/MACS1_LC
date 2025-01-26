
#include <stdio.h>

int main()
{
    double x;
    double *p = &x; /* p contient l’adresse de x */

    printf("adresse de x = %d\n", p);
    printf("adresse de x = %p\n", p);

    return 0;
}
