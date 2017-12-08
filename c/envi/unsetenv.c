#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int res;

	res = setenv("XXX", "aaa", 1);
	PS(getenv("XXX"));

	res = unsetenv("XXX");
	PD(res);
	PS(getenv("XXX"));
	
    return 0;
}
