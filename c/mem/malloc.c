#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	void *p;
	char *pc;

	p = malloc(128);

	PD(is0(p, 128));	// the memory not need to be zero
	print_by_byte(p, 128);


	pc = p;
	free(pc);

    return 0;
}
