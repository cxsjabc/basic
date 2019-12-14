#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char c;

	c = '\xF0';
	printf("%c %d %d %d\n", c, c, (unsigned)c, (unsigned char)c);
	return 0;
}
