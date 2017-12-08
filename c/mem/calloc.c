#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	void *p;

	p = calloc(10, 128);
	assert(p);	

	PD(is0(p, 1280));

    return 0;
}
