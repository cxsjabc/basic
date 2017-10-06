#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

void set_fl(int fd, int flag)
{
	int val;
	int val1;

	val = fcntl(fd, F_GETFL, 0);
	if(val < 0) {
		printf("get flag error!\n");
		return;
	}

	val |= flag;

	val1 = fcntl(fd, F_SETFL, val);
	if(val1 < 0) {
		printf("set flag error!\n");
		return;
	}
}

int main(int argc, char *argv[])
{
	int val;
	int fd;
	char buf[4096];
	int i = 0;
	ssize_t size;
	int is_sync = 0;

	if(argc == 2) {
		is_sync = atoi(argv[1]);
	}

	fd = open("out", O_WRONLY);
	assert(fd >= 0);
	
	if(is_sync)	// if true, will cost more time.
		set_fl(fd, O_SYNC);

	while(i < 1024) {
		size = write(fd, buf, 4096);		
		if(size != 4096) {
			perror("write error");
			break;
		}	
		++i;
	}
	
	close(fd);
		
    return 0;
}
