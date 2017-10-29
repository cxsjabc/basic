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

	fd = open("in", O_RDWR);
	assert(fd >= 0);
	
	ofset = lseek(fd, 8 * 1024 * 1024, SEEK_SET);
	PUL(ofset);
	size = write(fd, "mao", 3);
	PUL(size);

	assert(close(fd) == 0);
    return 0;
}
