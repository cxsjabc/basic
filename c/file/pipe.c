#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>
#include <string.h>

#include "common_local.h"

int main()
{
	int fds[2];
	off_t ofset;
	int res;
	char buf[128];

	res = pipe(fds);
	PD(res);
	assert(res == 0);

	write(fds[1], "xiyi", 4);
	memset(buf, 0, 128);
	read(fds[0], buf, 4);
	PS(buf);

    return 0;
}
