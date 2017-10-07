#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>
#include <string.h>

#include "common_local.h"

#define FIFO_NAME	"fifo_mao0"

int main(int argc, char *argv[])
{
	int fds[2];
	off_t ofset;
	int res;
	char buf[128];
	char *fifo_name;

	fifo_name = FIFO_NAME;
	if(argc == 2) {
		fifo_name = argv[1];
	}
	unlink(fifo_name);	// remove the file if exist

	res = mknod(fifo_name, S_IFIFO | 0666, 0);	
	PD(res);

	fds[0] = open(fifo_name, O_RDWR);	// if O_RDONLY or O_WRONLY, will hang..
	fds[1] = open(fifo_name, O_RDWR);
	assert(fds[0] >= 0 && fds[1] >= 0);

	write(fds[1], "mao", 3);	
	memset(buf, 0, 128);
	read(fds[0], buf, 3);
	PS(buf);

    return 0;
}
