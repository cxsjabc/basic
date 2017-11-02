#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int res;
	char *p;

	if(argc >= 2)
		p = argv[1];
	else
		p = "ls -l";
	
	res = system(p);
	PD(res);

    return 0;
}
