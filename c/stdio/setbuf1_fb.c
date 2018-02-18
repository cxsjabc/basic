#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

char buf[4096];

void print1()
{
	printf("|stdout|");
	fprintf(stderr, "|stderr|\n");
}

int main(int argc, char *argv[])
{
	int res;

	print1();

	setbuf(stdout, buf);	// full buffer

	print1();
	
    return 0;
}
