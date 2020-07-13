/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int ret;
	char buf[16] = {0};
	int fd;

	// stdin as non block
	fd = open("/dev/tty", O_RDONLY | O_NONBLOCK);
	if (fd < 0) {
		printf("open tty error!\n");
		return -1;
	}

	// if no input data, return immediately!
	ret = read(fd, buf, 15);
	if (ret > 0)
		printf("|%s|\n", buf);
	else
		printf("no avaiable data!\n");

	close(fd);
	return 0;
}
