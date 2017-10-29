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
	
	//fd = open("in", O_RDWR);
	fd = open("in", O_RDWR | O_EXLOCK);
	PE(fd, "");
	printf("opened file in:\n");
	sleep(10);    // now, can use "rm in" to remove file "in"
	printf("will unlink file in:\n");

	res = unlink("in");
	PE(res, "");

    return 0;
}
