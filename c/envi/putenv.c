#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int res;

	PS(getenv("HOME"));

	res = putenv("HOME=/");
	PD(res);

	PS(getenv("HOME"));
    return 0;
}
