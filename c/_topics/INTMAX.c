#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#if INT_MAX > 32267
#warning "INT_MAX > 32267"
typedef int INT32;
#else
#warning "INT_MAX <= 32267"
typedef long int INT32;
#endif

int main(int argc, char *argv[])
{
	printf("hello, my cat\n");
	return 0;
}
