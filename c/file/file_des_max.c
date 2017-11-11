#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>
#include <errno.h>

#include "common_local.h"

int main()
{
	int fd;
	off_t ofset;
	int res;
	int cnt = 0;
	
	while(1) {
		fd = open("in", O_RDWR);
		if(fd == -1) {
			perror("open failed:");
			if(errno == EMFILE) {
				printf("too many files:%d!\n", cnt);	// cnt: 253
			}
			break;
		}
		++cnt;
	}

    return 0;
}
