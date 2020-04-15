#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	printf("tty():%s, tty(1):%s, tty(2):%s\n", ttyname(0), ttyname(1), ttyname(2));
	return 0;
}
