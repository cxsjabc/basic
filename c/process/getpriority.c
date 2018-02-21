#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int pri;

	pri = getpriority(PRIO_PROCESS, 0);
	PD(pri);

    return 0;
}
