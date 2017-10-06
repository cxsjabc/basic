#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int fd;
	ssize_t size;
	char buf[128];

	fd = open("in", O_RDWR);		// contents: hellomaomao
	assert(fd >= 0);

	PLL(lseek(fd, 0, SEEK_CUR));	// 0

	size = pread(fd, buf, 6, 1);	// file pos is not changed!
	assert(size >= 0);
	PL(size);
	print_str(buf, 6);

	PLL(lseek(fd, 0, SEEK_CUR));	// still 0

	size = read(fd, buf, 6);
	assert(size >= 0);
	PL(size);
	print_str(buf, 6);

	PLL(lseek(fd, 0, SEEK_CUR));	// 6 

	close(fd);
    return 0;
}
