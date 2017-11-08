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
	ssize_t size;
	char buf[16];

	fd = open("in", O_RDWR);
	assert(fd >= 0);

	size = pread(fd, buf, 1, 0);
	PLL(size);

	PLL(lseek(fd, 0, SEEK_CUR));

	assert(close(fd) == 0);
    return 0;
}
