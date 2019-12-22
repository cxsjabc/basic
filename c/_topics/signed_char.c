#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	signed char c = -1;
	char c1 = 255;
	printf("%d %d\n", c, c1);
	return 0;
}
