#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
#if sizeof(int) > 4		// build error
	printf("sizeof int > 4\n");
#else
	printf("sizeof int > 4\n");
#endif
	return 0;
}
