#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i;

	for(i = 1; i < 10; ++i);	// check asm codes, can get the problem!
	{
		printf("%d\n", i);
	}

	return 0;
}
