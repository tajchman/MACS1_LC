#include <stdio.h>

int f()
{
        static int a = 1;
        a = a + 1;
        return a;
}

int main()
{
        int w;
        w = f();
        w = f();

        printf("\n      w = %d\n\n", w);
        return 0;
}
