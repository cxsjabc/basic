#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	char buf[128];
	int n;

	n = sprintf(buf, "hello,maomao:%d", 12);
	PD(n);
	PS(buf);
	
    return 0;
}
