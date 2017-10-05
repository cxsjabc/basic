#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int fd, fd1;
	off_t ofset;
	int res;
	ssize_t size;
	char buf[128];
	long resl;

	fd = open("in", O_RDWR);
	assert(fd >= 0);
	fd1 = open("in", O_RDWR);
	assert(fd1 >= 0);

	size = read(fd, buf, 3);		
	PL(size);
	PLL(lseek(fd, 0, SEEK_CUR));	// 3
	PLL(lseek(fd1, 0, SEEK_CUR));	// 0

	size = read(fd1, buf, 3);		
	PL(size);
	PLL(lseek(fd, 0, SEEK_CUR));	// 3
	PLL(lseek(fd1, 0, SEEK_CUR));	// 3

	PD(close(fd1));
	PD(close(fd));
    return 0;
}
