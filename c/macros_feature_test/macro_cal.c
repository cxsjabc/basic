#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#define DRAMC_REG(reg) (0x60000 + 0x10 + (reg))

int main(int argc, char *argv[])
{
	printf("%x\n", DRAMC_REG(0x2));
    return 0;
}
