#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;

	res = mkfifo("/tmp/my_fifo", 0777);
	PD(res);

    return 0;
}
