#include <stdio.h>
#include <float.h>

void affiche(char *type, size_t size,
             long double min, long double max, long double eps)
{
    printf("%12s: %3zd octets, min %10.3lg max %10.3lg epsilon %10.3lg\n", 
           type, size, min, max, eps);
}

int main()
{
    float f;
    double d;
    long double dd;

    affiche("float", sizeof(float), 
            FLT_MIN, FLT_MAX, DBL_EPSILON);
    affiche("double", sizeof(double), 
            DBL_MIN, DBL_MAX, FLT_EPSILON);
    affiche("long double", sizeof(long double), 
            LDBL_MIN, LDBL_MAX, LDBL_EPSILON);

    return 0;
}
