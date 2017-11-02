#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int res;

	if(argc != 2)
		return -1;

	res = puts(argv[1]);		// always return 10 : why?
	PD(res);

    return 0;
}
