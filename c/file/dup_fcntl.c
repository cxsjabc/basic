#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int fd, fd1;
	off_t ofset;
	ssize_t size;

	fd = open("in", O_RDWR);
	assert(fd >= 0);

	fd1 = fcntl(fd, F_DUPFD, 0);	// min fd num is 0
	PD(fd1);
	size = write(fd1, "eyuiscry", 6);
	PL(size);
	close(fd1);

	close(fd);
    return 0;
}
