#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

// compile error!
int main(int argc, char *argv[])
{
	int fd;
	char *buf;

	fd = open("in", O_RDONLY | O_DIRECT);
	PD(fd);
	buf = (char *)memalign(512, 1024);	
	PP(buf);

	close(fd);
    return 0;
}
