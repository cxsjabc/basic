#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

// now, we find MAC don't have O_DIRECT
int main()
{
	int fd;
	ssize_t nsize;	
	char buf[128];

	fd = open("xixi", O_WRONLY);
	if(fd >= 0) {
		printf("open successful!\n");
	} else {
		perror("open failed!\n");
	}


	nsize = write(fd, "maomao", 6);
	PL(nsize);
	if(nsize < 0) {
		perror("write failed!");
	}

	nsize = read(fd, buf, 6);
	PL(nsize);
	if(nsize < 0) {
		perror("read failed!");
	}

	close(fd);
    return 0;
}
