#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i = 100;
	int *pi = &i;
	int **ppi = &pi;

	printf("%d, %d, %d\n", i, *pi, **ppi);
	printf("pi:%p, ppi:%p\n", pi, ppi);

    return 0;
}
