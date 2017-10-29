#include <stdio.h>	
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int res;
	struct stat buf;

	if(stat("in", &buf) < 0)
		err_exit("");
	res = chmod("in", (buf.st_mode & ~S_IXGRP) | S_IXUSR);
	PD(res);
	system("ls -l in");

    return 0;
}
