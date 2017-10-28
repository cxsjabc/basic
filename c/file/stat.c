#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>
#include <sys/stat.h>

#include "common_local.h"

int main()
{
	int fd;
	off_t ofset;
	int res;
	struct stat buf;	

	fd = open("in", O_RDWR);
	assert(fd >= 0);
	
	res = stat("in", &buf);
	assert(res == 0);

	printf("inode_num:%llu, size:%llu\n", buf.st_ino, buf.st_size);
	if(S_ISREG(buf.st_mode))
		printf("regular file!\n");
	else	
		printf("other file!\n");
	
	assert(close(fd) == 0);
    return 0;
}
