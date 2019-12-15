#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i = 1;
	printf("%d %d\n", i >> 32, i << 32);
	return 0;
}
