#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

typedef unsigned long long ulong_ptr;

int main(int argc, char *argv[])
{
	unsigned long long *pi;
	unsigned long long v = 1;

	pi = (ulong_ptr)v;

	printf("%x\n", pi);
    return 0;
}
