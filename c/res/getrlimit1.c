#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#ifdef RLIMIT_CPU
	#warning "defined RLIMIT_CPU"
#endif

int main(int argc, char *argv[])
{
    printf("hello, my cat\n");
    return 0;
}
