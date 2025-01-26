#include <stdlib.h>
#include <stdio.h>

int main()
{
	double x;

	int *a = NULL;
	double *b = &x;

	if (((size_t) a) == ((size_t) b))
		printf("a == b");
	else
		printf("a différent de b\n");


	return 0;
}
