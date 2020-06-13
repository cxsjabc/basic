#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int fd;
	struct termios t;

	tcgetattr(0, &t);
	printf("VMIN:%d, VTIME:%d\n", t.c_cc[VMIN], t.c_cc[VTIME]);
	tcgetattr(1, &t);
	printf("VMIN:%d, VTIME:%d\n", t.c_cc[VMIN], t.c_cc[VTIME]);
	tcgetattr(2, &t);
	printf("VMIN:%d, VTIME:%d\n", t.c_cc[VMIN], t.c_cc[VTIME]);
	return 0;
}
