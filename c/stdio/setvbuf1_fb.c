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

	print1();

	// even the buffer is set to NULL, but buffer flag is _IOFBF, internally
	// it will allocate a buffer: hehe!
	res = setvbuf(stdout, NULL, _IOFBF, 0);	// full buffer
	assert(res == 0);

	print1();
	
    return 0;
}
