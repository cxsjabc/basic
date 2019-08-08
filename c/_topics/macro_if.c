#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int a = 1;
int b = 2;

#if a != b
#warning "a != b"
#else
#warning "a == b"
#endif

int main(int argc, char *argv[])
{
	printf("hello, my cat\n");
	return 0;
}
