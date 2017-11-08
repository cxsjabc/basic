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
	int x;
	char b;	
	struct iovec vec[2];
	ssize_t size;

	fd = open("in", O_RDWR);
	assert(fd >= 0);

	vec[0].iov_base = &x;
	vec[0].iov_len = sizeof(x);
	vec[1].iov_base = &b;
	vec[1].iov_len = sizeof(b);
	
	size = readv(fd, vec, 2);
	PL(size);	
	printf("%x, %c\n", x, b);

	assert(close(fd) == 0);
    return 0;
}
