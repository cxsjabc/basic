#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#undef MAX
#define MAX (x,y)	((x) > (y) ? (x) : (y))

int main(int argc, char *argv[])
{
	PD(MAX(1, 2));
	return 0;
}
