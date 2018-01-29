#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i = 0xFE;
	i <<= 1;
    printf("%x\n", i);
	i >>= 2;
    printf("%x\n", i);
    return 0;
}
