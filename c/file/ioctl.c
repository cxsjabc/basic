#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>

int main()
{
	struct winsize size;

	if(isatty(STDOUT_FILENO) == 0) {
		printf("not a tty\n");
		exit(1);
	}

	if(ioctl(STDOUT_FILENO, TIOCGWINSZ, &size) < 0) {
		perror("ioctl winsize error.");
		exit(2);
	}

	printf("row:%d, column:%d\n", size.ws_row, size.ws_col);
    return 0;
}
