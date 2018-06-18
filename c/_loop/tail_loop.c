/*
	If using "gcc -O2 tail_loop.c -o tail_loop.c.O2.elf", will 
	use tail loop, no segment fault.
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int tail_func(int n, int res)
{
	if(n <= 1)
		return res;

	return tail_func(n - 1, n * res);
}

int main(int argc, char *argv[])
{
	PD(tail_func(INT_MAX, 1));
    return 0;
}
