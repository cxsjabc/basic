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
	ssize_t size;

	res = pipe(fds);
	PD(res);
	assert(res == 0);
	PD(fds[0]);
	PD(fds[1]);

	//write(fds[1], "xiyi", 4);
	close(fds[1]);
	memset(buf, 0, 128);
	size = read(fds[0], buf, 4);	// return 0: because fds[1] is closed.
	PLL(size);
	PS(buf);

    return 0;
}
