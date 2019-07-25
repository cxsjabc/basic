#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#undef MAX
#define MAX(a, b)	((a) > (b) ? (a) : (b))

static int max(int a, int b)
{
	return a > b ? a : b;
}

int main(int argc, char *argv[])
{
	int cnt = 1000;

	if(argc > 1)
		cnt = atoi(argv[1]);	

	if(cnt < 0)
		cnt = 1000;

	TS(cnt)
		max(1, 2);
	TE	
	return 0;
}
