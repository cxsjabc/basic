#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i = 0x4;

	if(i & 0x4 != 0)
		printf("i & 0x4 != 0!\n");
	else
		printf("i & 0x4 == 0!\n");
	return 0;
}
