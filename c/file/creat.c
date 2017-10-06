#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int fd;
	fd = creat("in", 0664);	// even file exist, "in" can be generated
	assert(fd >= 0);

	close(fd);
    return 0;
}
