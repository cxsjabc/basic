#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i = -1;

	if (argc > 1)
		i = atoi(argv[1]);

	printf("MSB:%d\n", 0x1 & (i >> (sizeof(int) - 1)));
	return 0;
}
