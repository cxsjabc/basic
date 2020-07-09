/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i <= 3; ++i) {
		printf("fd %d: ttyname:%s, %s a tty!\n",
				i, ttyname(i), isatty(i) ? "is" : "isn't");
	}

	return 0;
}
