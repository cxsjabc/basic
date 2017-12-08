#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	void *p;
	char *pc;
	int i = 1;

	p = alloca(128);
	assert(p);
	PP(p);
	PP(&i);

	pc = p;
	pc[0] = 'x';
	pc[1] = 'q';
	pc[2] = '\0';

	PS(p);
    return 0;
}
