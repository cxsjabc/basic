#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i = -1;
	unsigned j = 0xFFFFFFFF;
	printf("%x %x\n", *(unsigned int *)&i, *(unsigned int *)&j);
	return 0;
}
