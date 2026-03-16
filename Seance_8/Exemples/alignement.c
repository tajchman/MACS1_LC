#include <stdio.h>
#include <stddef.h>

void alignement1()
{
    int a;
    char b;
    double c;

    size_t debut_a = (size_t) &a, fin_a = debut_a + sizeof(a) - 1;
    size_t debut_b = (size_t) &b, fin_b = debut_b + sizeof(b) - 1;
    size_t debut_c = (size_t) &c, fin_c = debut_c + sizeof(c) - 1;

    printf("\nzone memoire de a : %zu - %zu (%zu octets)\n", 
        debut_a, fin_a, sizeof(a));
    printf("zone memoire de b : %zu - %zu (%zu octets)\n", 
        debut_b, fin_b, sizeof(b));
    printf("zone memoire de c : %zu - %zu (%zu octets)\n", 
        debut_c, fin_c, sizeof(c));
}

void alignement2()
{
    char s3[101];
    char s2[101];
    char c;
    char s1[51];

    size_t debut_s1 = (size_t) &s1, fin_s1 = debut_s1 + sizeof(s1) - 1;
    size_t debut_c = (size_t) &c, fin_c = debut_c + sizeof(c) - 1;
    size_t debut_s2 = (size_t) &s2, fin_s2 = debut_s2 + sizeof(s2) - 1;
    size_t debut_s3 = (size_t) &s3, fin_s3 = debut_s3 + sizeof(s3) - 1;

    printf("\nzone memoire de s1 : %zu - %zu (%zu octets)\n", 
        debut_s1, fin_s1, sizeof(s1));
    printf("zone memoire de c  : %zu - %zu (%zu octets)\n", 
        debut_c, fin_c, sizeof(c));
    printf("zone memoire de s2 : %zu - %zu (%zu octets)\n", 
        debut_s2, fin_s2, sizeof(s2));
    printf("zone memoire de s3 : %zu - %zu (%zu octets)\n", 
        debut_s3, fin_s3, sizeof(s3));
}

int  main()
{
    alignement1();
    alignement2();
    return 0;
}
