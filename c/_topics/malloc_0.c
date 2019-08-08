#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int *p;

	p = (int *)malloc(0);
	PP(p);
	p[0] = 1;
	return 0;
}
