#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void signalHandler_CtrlZ(int sig) {
    printf("\n\nvous avez tape control-Z\n\n");
}
void signalHandler_CtrlC(int sig) {
    printf("\n\nvous avez tape control-C : arret\n\n");
    _Exit(0);
}


int main() 
{
    struct sigaction sa;
    sa.sa_handler = SIG_IGN;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;

    sigaction(SIGINT, &sa, NULL);
    int k=1;

    while (1)
    {
        usleep(500);
        k++;
        fprintf(stderr, "k : %6d   \r", k);
        if (k == 5000) {
            sa.sa_handler = signalHandler_CtrlC;
            sigaction(SIGINT, &sa, NULL);
        }
    }
    return 0;
}
