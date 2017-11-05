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

	fd1 = fd + 1;
	fd1 = dup2(fd, fd1);
	PD(fd1);
	write(fd1, "mao", 3);

	close(fd1);
	PD(close(fd));	// why no error here? It should be closed by dup2.
	PD(close(fd));	// should print -1
    return 0;
}
