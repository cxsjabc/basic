#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
#if INT_MAX == 2147483647
	printf("int is 4 bytes\n");
#else
	printf("int isn't 4 bytes\n");
#endif
	return 0;
}
