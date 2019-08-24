#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	long l = 0xFEDCBA9876543210;	// movabsq	$-0x123456789abcdf0, %rsi ?? 

	printf("%d\n", l);
	return 0;
}
