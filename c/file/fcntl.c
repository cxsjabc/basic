#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int fd;
	off_t ofset;
	int res;
	int flags;
	
	flags = fcntl(1, F_GETFL);
	assert(flags != -1);
	PD(flags);

	O_ACCMODE
	if(flags & O_SYNC)
		printf("synchronous mode!\n");

    return 0;
}
