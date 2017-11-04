#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	int res;
	
	if(argc != 2)
		exit(1);

	fp = freopen(argv[1], "r", stdin);		
	assert(fp != NULL);

	res = execl("./upper.c.elf", "upper.c.elf", NULL);
	PD(res);

    return 0;
}
