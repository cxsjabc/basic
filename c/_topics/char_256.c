#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char c = 256;	// 256:0, 257:1, ...
	printf("%d\n", c);
	return 0;
}
