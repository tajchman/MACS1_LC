#include <stdio.h>

int main()
{
    short a[2];

    FILE *f = fopen("x", "rb");
    fread(&a, sizeof(short), 2, f);
    fclose(f);

    printf("a[0] = %d a[1] = %d\n", a[0], a[1]);
    return 0;
}