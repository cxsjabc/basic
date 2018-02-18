#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#define BUF_SIZE	4096

char buf[BUF_SIZE];

void print1()
{
	printf("|stdout|");
	fprintf(stderr, "|stderr|\n");
}

int main(int argc, char *argv[])
{
	int res;
	int buf_size = BUF_SIZE;

	if(argc > 1)
		buf_size = atoi(argv[1]);
	if(buf_size < 0)
		buf_size = BUF_SIZE;

	print1();

	setbuffer(stdout, buf, buf_size);	// can set buffer size

	print1();
	
    return 0;
}
