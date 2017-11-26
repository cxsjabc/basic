#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;
	struct utsname n;

	res = uname(&n);
	PD(res);

	printf("sysname:%s, nodename:%s\n", n.sysname, n.nodename);
    return 0;
}
