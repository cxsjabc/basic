#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	long l = 1;	

	printf("%ld\n", l);		// long is 8 bytes: movq	-0x18(%rbp), %rsi
	return 0;
}
