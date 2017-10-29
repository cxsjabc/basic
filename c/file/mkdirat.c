#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

#define	DIR_NAME "dir1"

int main()
{
	int fd;
	off_t ofset;
	int res;

	res = mkdirat(AT_FDCWD, DIR_NAME, S_IRWXU);
	PI(res, "");

	system("ls -ld " DIR_NAME);
    return 0;
}
