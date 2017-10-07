#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int fd;
	off_t ofset;
	ssize_t size;
	char buf[128];

	fd = open("in", O_RDWR | O_APPEND);
	assert(fd >= 0);
	
	memset(buf, 0, 128);
	size = read(fd, buf, 3);	// read pos is from 0
	PL(size);
	PS(buf);

	size = write(fd, "xixi", 4);	// write pos is at the end of file	
	PL(size);

	close(fd);
    return 0;
}
