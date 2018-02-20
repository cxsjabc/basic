#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int fd;
	fd = fileno(stdout);
	PD(fd);
    return 0;
}
