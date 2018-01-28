
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#undef swap
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char *argv[])
{
	int a = 1, b = 2;

	printf("%d,%d\n", a, b);
	swap(&a, &b);
	printf("after swap: %d,%d\n", a, b);

    return 0;
}
