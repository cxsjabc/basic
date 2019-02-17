#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "print.h"

#define DEBUG(msg, arg...)	\
	printf("[%s@%d]" msg, __func__, __LINE__, ##arg)

int main(int argc, char *argv[])
{
	DEBUG("start %d\n", 1);
    return 0;
}
