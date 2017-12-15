#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int fd;

	fd = open("root_file", O_RDONLY);
	PD(fd);

	if(fd >= 0)
		close(fd);

    return 0;
}
