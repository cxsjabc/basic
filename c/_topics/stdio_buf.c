#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	static char buf[1024];

	memset(buf, 0, 1024);
	setbuf(stdout, buf);

	printf("a");
	printf("%s", buf);

	sleep(3);

	return 0;
}
