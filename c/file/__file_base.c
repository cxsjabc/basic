#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int fd;
	off_t ofset;

	fd = open("in", O_RDWR);
	assert(fd >= 0);


	assert(close(fd) == 0);
    return 0;
}
