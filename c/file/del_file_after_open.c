#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#define	FILE	"data.in"

int main()
{
	int fd;
	ssize_t size;

	fd = open(FILE, O_RDWR);
	assert(fd >= 0);

	printf("open %d successfully!\n", fd);
	
	printf("please execute: rm %s in another terminal...\n", FILE);
	sleep(10);

	size = write(fd, "xixi", 4); // if the file is deleted, write: no effect
	printf("write %zd bytes!\n", size);
	
	printf("Now, will close the file:%s\n", FILE);
	close(fd);

    return 0;
}
