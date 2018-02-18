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

	res = setvbuf(stdout, NULL, _IOLBF, 0);	// line buffer
	assert(res == 0);

	print1();
	
    return 0;
}
