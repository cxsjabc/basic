#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int res;
	int fd;
	ssize_t size;

	fd = open("in", O_RDWR);
	assert(fd >= 0);

	res = lseek(fd, 100, SEEK_END);
	PD(res);
	size = write(fd, "mao", 3);
	PL(size);	

	close(fd);
    return 0;
}
