#include <stdio.h>
#include<unistd.h>

int main()
{
    short k=1;
    while (1)
    {
        usleep(100);
        k++;
        fprintf(stderr, "k : %6d   \r", k);
    }
    return 0;
}