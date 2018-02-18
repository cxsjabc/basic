#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

char buf[4096];

int main(int argc, char *argv[])
{
	int res;

	//setbuf(stderr, buf);	// set stderr to full buffer
	printf("hello");
	fprintf(stderr, "err");
	sleep(3);
	res = fflush(NULL);
	PD(res);

    return 0;
}
