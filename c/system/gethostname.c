#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;
	char name[128];

	res = gethostname(name, 128);
	PD(res);
	PS(name);
    return 0;
}
