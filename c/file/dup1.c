#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int fd;
	off_t ofset;
	int res;
	int fd1;

	fd = open("in", O_RDWR);
	assert(fd >= 0);

	fd1 = dup(fd);
	PD(fd1);
	write(fd1, "mao", 3);

	close(fd1);
	assert(close(fd) == 0);
    return 0;
}
