#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

int main() 
{ 
    signal(SIGINT, SIG_IGN); 

    int k=1;
    while (1)
    {
        usleep(100);
        k++;
        fprintf(stderr, "k : %6d   \r", k);
    }
    return 0;
}
