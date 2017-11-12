#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#define FIFO_NAME "/tmp/my_fifo"

int main(int argc, char *argv[])
{
	int res;
	int mode = 0;
	int i;

	for(i = 1; i < argc; ++i) {
		if(strncmp(*++argv, "O_RDONLY", 8) == 0)
			mode |= O_RDONLY;
		if(strncmp(*argv, "O_WRONLY", 8) == 0)
			mode |= O_WRONLY;
		if(strncmp(*argv, "O_NONBLOCK", 10) == 0)
			mode |= O_NONBLOCK;
	}

	if(access(FIFO_NAME, F_OK) == -1) {
		res = mkfifo("/tmp/my_fifo", 0777);
		PD(res);
		if(res < 0)
			return -1;
	}

	printf("will open FIFO:\n");
	res = open(FIFO_NAME, mode);
	printf("open FIFO return:%d\n", res);
	if(res == 0)
		close(res);

    return 0;
}
