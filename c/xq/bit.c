#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int a = 0xFE;
	int b = 0xEF;

	printf("a&b: %x, a|b: %x, a^b:%x\n", a & b, a | b, a ^ b);
	
    return 0;
}
