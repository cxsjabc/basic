#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	char buf[128];
	int n;

	n = snprintf(buf, 20, "hello,maomao:%d", 12);
	PD(n);	// 15
	PS(buf);

	n = snprintf(buf, 10, "hello,maomao:%d", 12);
	PD(n);	// 15: would print bytes
	PS(buf);
	
    return 0;
}
