#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int a, b;

	a = 1;
	b = 0xFEDCBA;

	printf("%#x\n", *(&a - 1));
	return 0;
}
