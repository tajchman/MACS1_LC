#include <stdio.h>

int main()
{
    short a, b;

    FILE *f = fopen("x", "rb");
    fread(&a, sizeof(short), 1, f);
    fread(&b, sizeof(short), 1, f);
    fclose(f);

    printf("a = %d b = %d\n", a, b);
    return 0;
}