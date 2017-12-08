#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char *p;

	p = getenv("USER");
	PS(p);

	p[1] = 'q';
	p = getenv("USER");	
	PS(p);

    return 0;
}
