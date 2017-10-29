#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;
	DIR *dir;
	int fd;

	dir = opendir("dir1");
	assert(dir);
	fd = dirfd(dir);
	res = fchdir(fd);
	PD(res);

	system("ls -ld .");

    return 0;
}
