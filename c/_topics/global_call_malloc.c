#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

char *p = (char *)malloc(10);

int main(int argc, char *argv[])
{
	printf("hello, my cat\n");
	return 0;
}
