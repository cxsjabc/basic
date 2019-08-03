#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int *f()
{
	return NULL;
}

int *(*pf)() = &f;

typedef int *(*px[2])();

int main(int argc, char *argv[])
{
	int *(*x[2])() = {pf, pf};
	return 0;
}
