#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i;

	printf("hello, my cat");

	i = 2 / 0;

	return 0;
}
