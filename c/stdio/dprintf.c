#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int res;

	if(argc != 2)
		return -1;

	res = dprintf(STDOUT_FILENO, "cat%d", atoi(argv[1]));
	fprintf(stderr, "shows after cat..");
	PD(res);

    return 0;
}
