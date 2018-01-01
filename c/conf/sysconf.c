#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	long res;

	errno = 0;
	res = sysconf(_SC_ARG_MAX);
	if(res != -1)
		printf("ARG_MAX:%ld\n", res);
	else {
		if(errno == 0)
			printf("unsupport!\n");
		else
			printf("sysconf error!\n");
	}
    return 0;
}
