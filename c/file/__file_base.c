#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

int main()
{
	int fd;
	off_t ofset;

	fd = open("data.in", O_RDWR);
	assert(fd >= 0);


	close(fd);
    return 0;
}
