#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;

	res = chdir("/");
	PD(res);

	system("ls");

    return 0;
}
