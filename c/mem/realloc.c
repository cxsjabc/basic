#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	void *p;
	void *p1;

	p = realloc(NULL, 124);
	assert(p);

	PD(is0(p, 124));

	p1 = p;
	p = realloc(p, 130);
	assert(p);
	PD(is0(p, 130));
	
    return 0;
}
