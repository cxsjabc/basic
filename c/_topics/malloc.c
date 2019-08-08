#include <stdio.h>

void * malloc(int size)	// a fake malloc, can build pass
{
	return (void *)size;
}

int main(int argc, char *argv[])
{
	printf("%p\n", malloc(4));

	return 0;
}
