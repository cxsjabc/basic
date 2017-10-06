#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int fd;
	off_t ofset;

	fd = open("in", O_RDWR);
	assert(fd >= 0);

	PL(write(fd, "xxx", 3));
	system("cat in");	
	sleep(5);
	system("cat in");	
	PNL();

	sync();		// sync the written data to disk: "xxx"
	system("cat in");	
	PNL();
	sleep(5);
	system("cat in");	
	PNL();

	close(fd);
    return 0;
}
