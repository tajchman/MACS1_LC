#include <stdio.h>

int main()
{
    unsigned short v = 0x1234, w = 0x3355;
    printf("v = %d  w = %d\n", v, w);

    FILE * fp = fopen("x", "wb");    
    fwrite(&v, sizeof v, 1, fp);
    fwrite(&w, sizeof w, 1, fp);
    fclose(fp);

    return 0;
}