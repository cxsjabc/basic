#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

#define	major(dev)		(dev)
#define	minor(dev)		(dev)

int main(int argc, char *argv[])
{
	int fd;
	off_t ofset;
	int res;
	struct dirent *ent;
	DIR *dir;
	struct stat buf;
	int complete = 1;

	if(argc != 2)
		return -1;

	dir = opendir(argv[1]);	
	assert(dir);

	res = chdir(argv[1]);
	assert(res == 0);
	while(ent = readdir(dir)) {
		res = stat(ent->d_name, &buf);
		if(res != 0) {
			PE(res, "");
			complete = 0;	
			continue;	
		}
		printf("ent:%s\n", ent->d_name);
		if(!strcmp(ent->d_name, ".") || !strcmp(ent->d_name, ".."))
			continue;
		if(S_ISDIR(buf.st_mode))
			continue;	
		if(S_ISCHR(buf.st_mode))
			printf("\tChar Device: dev:%d/%d, rdev:%d/%d\n", major(buf.st_dev), minor(buf.st_dev), major(buf.st_rdev), minor(buf.st_rdev));
		if(S_ISBLK(buf.st_mode))
			printf("\tBlock Device: dev:%d/%d, rdev:%d/%d\n", major(buf.st_dev), minor(buf.st_dev), major(buf.st_rdev), minor(buf.st_rdev));
	}

	assert(closedir(dir) == 0);

    return 0;
}
