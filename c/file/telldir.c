#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	DIR *dir;
	struct dirent *entry;
	long pos;

	dir = opendir("/");
	assert(dir);

	while((entry = readdir(dir)) != NULL) {
		printf("name:%s, inode:%lld\n", entry->d_name, entry->d_ino);
		if(strcmp(entry->d_name, "bin") == 0)
			pos = telldir(dir);	// just store the position: the pos after bin
	}

	printf("=========================================\n");
	seekdir(dir, pos);		// we want to return to file: bin
	while((entry = readdir(dir)) != NULL) {
		printf("name:%s, inode:%lld\n", entry->d_name, entry->d_ino);
	}

	closedir(dir);
    return 0;
}
