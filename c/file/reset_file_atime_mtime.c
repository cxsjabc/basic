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
	struct stat buf;
	struct timespec times[2];

	res = stat("in", &buf);
	assert(res >= 0);
	fd = open("in", O_RDWR | O_TRUNC);
	assert(fd >= 0);
	times[0] = buf.st_atimespec;
	times[1] = buf.st_mtimespec;
	
	res = utimes("in", times);
	PD(res);

	assert(close(fd) == 0);
    return 0;
}
