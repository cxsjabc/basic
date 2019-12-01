#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int is_overflow(int a, int b)
{
	return a > INT_MAX - b;
}
#if 0
int is_overflow(unsigned a, unsigned b)
{
	return (a + b > INT_MAX);
}
#endif

int main(int argc, char *argv[])
{
	int a, b;
	if(argc == 3) {
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		PD(is_overflow(a, b));
	}
	else {
		PD(is_overflow(2147483647, 1));
		PD(is_overflow(2147483646, 1));
	}
	return 0;
}
