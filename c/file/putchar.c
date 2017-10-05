#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int c;

	c = putchar('x');
	PC(c);
	sleep(2);

    return 0;
}
