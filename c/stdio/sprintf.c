#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;
	int i = 1;
	char buf[16];
	
	res = sprintf(buf, "str:%d", i);
	PD(res);
	PS(buf);

    return 0;
}
