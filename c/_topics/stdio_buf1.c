#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	printf("a");	// not output immediately
	sleep(1);

	printf("b");
	sleep(1);

	setbuf(stdout, NULL);	// no buffer

	printf("c");
	sleep(1);

	return 0;
}
