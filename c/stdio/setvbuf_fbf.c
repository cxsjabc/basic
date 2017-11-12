#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

void print1()
{
	printf("|stdout|");
	fprintf(stderr, "|stderr|\n");
}

int main(int argc, char *argv[])
{
	int res;
	char buf[128];
	int buf_size = 8;

	if(argc != 2)
		return -1;

	buf_size = atoi(argv[1]);
	if(buf_size <= 0 || buf_size > 128)
		buf_size = 8;

	print1();

	// use stack buffer for stdout buffer: seems not the best way.
	res = setvbuf(stdout, buf, _IOFBF, buf_size);
	assert(res == 0);

	print1();
	
    return 0;
}
