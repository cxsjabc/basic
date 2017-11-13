#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i;

	if(argc != 2)
		return -1;

	i = atoi(argv[1]);
	printf("%hhc\n", i);	// %hhc no effect..

    return 0;
}
