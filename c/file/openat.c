#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int dirfd, fd;
	
	dirfd = open("./test", O_RDONLY);	// test folder must be exist!
	assert(dirfd >= 0);

	fd = openat(dirfd, "out", O_RDWR | O_CREAT, 0640); // create file "out" in dirfd
	assert(fd >= 0);

	write(fd, "mao", 3);

	close(fd);
	close(dirfd);

    return 0;
}
