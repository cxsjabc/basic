#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	FILE *fd;
	off_t ofset;

	fd = fopen("in", "r+");
	assert(fd);

	PL(fwrite("xxx", 3, 1, fd));
	system("cat in");	// not ready
	sleep(5);
	system("cat in");	// not ready	
	PNL();

	sync();		// sync the written data to disk: "xxx"
	system("cat in");	// not ready: fwrite maybe just writes to userspace 
	PNL();
	sleep(5);
	system("cat in");	// not ready
	PNL();

	fclose(fd);
    return 0;
}
