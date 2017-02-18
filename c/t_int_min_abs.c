#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	int a = INT_MIN;
	printf("a:%d, abs(%d)=%d\n", a, a, abs(a));
	return 0;
}

