#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int res;
	
	if(argc != 2)
		return -1;

	res = fprintf(stdout, "cat%d", atoi(argv[1]));
	PD(res);

    return 0;
}
