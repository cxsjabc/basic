#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int arr[] = {1, 2, 3};
	int *p;

	p = arr;

	printf("%d, %d, %d\n", *p, *(p + 1), *(p + 2));
    return 0;
}
