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

	fd = open("/dev/fd/1", O_WRONLY);
	assert(fd >= 0);

	write(fd, "mao", 3);

	assert(close(fd) == 0);
    return 0;
}
