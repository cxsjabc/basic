#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int arr[][2] = {{1, 2}, {3, 4}};
	int **p;

	p = (int **)arr;

	printf("%d\n", **p);
    return 0;
}
