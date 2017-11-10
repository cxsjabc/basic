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

	fd = open("in", O_RDWR | O_APPEND);
	assert(fd >= 0);

	lseek(fd, 0, SEEK_SET);	// if write, file pos is still at the beginning.
	write(fd, "mao", 3);


	assert(close(fd) == 0);
    return 0;
}
