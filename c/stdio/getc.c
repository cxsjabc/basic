#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

FILE * get_fs()
{
	
	return stdin;
}

int main(int argc, char *argv[])
{
	int c;

	c = getc(get_fs());
	PC(c);

    return 0;
}
