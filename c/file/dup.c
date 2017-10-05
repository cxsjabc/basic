#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int fd;
	//off_t ofset;
	int res_fd;
	ssize_t size;
	int res;

	fd = open("in", O_RDWR);
	assert(fd >= 0);

	res_fd = dup(fd);
	PD(res_fd);

	size = write(res_fd, "hello\n", 6);	
	PL(size);	// now, fd's file pos is also changed.
	size = write(fd, "maomao\n", 7);
	PL(size);

	res = close(res_fd);
	PD(res);
	res = close(res_fd);	// res_fd is closed, so it returns -1
	PD(res);

#if 0	
	res_fd = dup(1);	// write to res_fd is the same to write to stdout
	PD(res_fd);
	
	write(res_fd, "hello\n", 6);
#endif

	close(fd);
    return 0;
}
