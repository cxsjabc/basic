#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>
#include <dirent.h>
#include <sys/stat.h>

#include "common_local.h"

int main()
{
	int fd;
	off_t ofset;
	DIR *dir;
	int res;
	struct stat buf;	

	dir = opendir("test");
	fd = dirfd(dir);
	assert(fd >= 0);
	
	res = fstatat(fd, "out", &buf, AT_SYMLINK_NOFOLLOW);
	assert(res == 0);

	printf("inode_num:%llu, size:%llu\n", buf.st_ino, buf.st_size);
	
	assert(close(fd) == 0);
    return 0;
}
