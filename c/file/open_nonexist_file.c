#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#include "common_local.h"

int main()
{
	int fd;

	fd = open("notexist", O_WRONLY);
	if(fd < 0) {
		if(errno == ENOENT) {
			printf("not exist!\n");
		}
	}
    return 0;
}
