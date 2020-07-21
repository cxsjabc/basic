#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define PD(s)	printf(#s "is: %d\n", (s))

int is_add_overflow(int a, int b)
{
	if (a > 0 && b > 0 && a + b < 0)
		return 1;
	if (a < 0 && b < 0 && a + b > 0)
		return 1;
	return 0;
}

int main(int argc, char *argv[])
{
	int a, b;

	if(argc == 3) {
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		PD(is_add_overflow(a, b));
	}
	else {
		PD(is_add_overflow(2147483647, 1));
		PD(is_add_overflow(2147483646, 1));
	}
	return 0;
}
