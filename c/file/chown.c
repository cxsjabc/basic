#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int res;

	res = chown("in", getuid(), getgid());	// ok
	PD(res);

	res = chown("in", 0, 0);	// set uid/gid: root
	PD(res);
	if(res == -1)
		perror("chown error");

    return 0;
}

