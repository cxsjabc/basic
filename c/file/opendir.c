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

	dir = opendir("/");
	assert(dir);

	while((entry = readdir(dir)) != NULL) {
		printf("name:%s, inode:%lld\n", entry->d_name, entry->d_ino);
	}

	closedir(dir);
    return 0;
}
