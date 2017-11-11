#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;
	int i = 10;
	char buf[16];
	
	res = snprintf(buf, 6, "str:%d", i);	// buf: null-terminated
	PD(res);
	printf("|%s|", buf);

    return 0;
}
