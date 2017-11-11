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
	int child;

	res = pipe(fds);
	PD(res);
	assert(res == 0);

	child = fork();
	assert(child >= 0);

	if(child > 0) {
		sleep(2);
		write(fds[1], "xiyi", 4);
	} else if(child == 0) {
		int flag;
		// set fd to non-block
		flag = fcntl(fds[0], F_GETFL);
		res = fcntl(fds[0], F_SETFL, flag | O_NONBLOCK);	// non-block
		PD(res);
		printf("waiting for read data...\n");
		memset(buf, 0, 128);
		res = read(fds[0], buf, 4);
		PD(res);
		PS(buf);
	}

    return 0;
}
