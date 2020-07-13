/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>

int main(int argc, char *argv[])
{
	int fd;
	struct termios t;
	char buf[5] = {0};

	/* set tty buffer as: max one character */
	tcgetattr(0, &t);
	t.c_lflag &= ~(ICANON);
	t.c_cc[VMIN] = 1;
	tcsetattr(0, TCSANOW, &t);
	tcgetattr(0, &t);
	printf("VMIN:%d, VTIME:%d\n", t.c_cc[VMIN], t.c_cc[VTIME]);

	// if input one char, read will return!
	read(0, buf, 4);

	printf("buffer: %s\n", buf);

	return 0;
}
