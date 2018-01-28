#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 255;

	a |= (1 << 1);	
	printf("%x\n", a);

	b &= ~(1 << 2);
	printf("%x\n", b);

    return 0;
}
