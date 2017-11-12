#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int fd;
	off_t ofset;
	int res;

	res = fwide(stdin, 0);
	PD(res);
	res = fwide(stdout, 0);
	PD(res);
	res = fwide(stderr, 0);
	PD(res);


    return 0;
}
