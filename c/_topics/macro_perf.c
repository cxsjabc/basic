#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#undef MAX
#define MAX(a, b)	((a) > (b) ? (a) : (b))

int main(int argc, char *argv[])
{
	TS(1000)
		printf("%d", MAX(1, 2));
	TE	
	return 0;
}
