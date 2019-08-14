#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#ifdef N
#warning "N is defined!"
#else
#warning "N isn't defined!"
#endif

int main(int argc, char *argv[])
{
	printf("hello, my cat\n");
	return 0;
}
