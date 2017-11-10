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

	ofset = lseek(fd, 2, SEEK_SET);
	printf("ofset:%lld, sizeof(off_t):%d\n", ofset, sizeof(off_t));

	close(fd);
    return 0;
}
