#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int fd;
	off_t ofset;
	int res;
	
	if(argc != 2)
		return -1;

	res = rmdir(argv[1]);
	PE(res, "");

    return 0;
}
