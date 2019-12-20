#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int sum(int a, int b)
{
	int t = a + b;
}

int main(int argc, char *argv[])
{
	int a;

	__asm volatile("movl $4, %eax\n");
	a = sum(1, 2);
	printf("%d\n", a);
	return 0;
}
