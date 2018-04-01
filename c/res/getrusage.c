#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	struct rusage u;
	int ret;

	ret = getrusage(RUSAGE_SELF, &u);
	PD(ret);
	printf("utime:%d, stime:%d\n", u.ru_utime, u.ru_stime);	

    return 0;
}
