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

	if(argc != 2)
		exit(1);

	res = access(argv[1], R_OK);
	PD(res);

	fd = open(argv[1], O_RDONLY);
	PD(fd);

    return 0;
}
