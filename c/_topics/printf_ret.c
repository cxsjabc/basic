#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int ret;

	ret = printf("123");
	PD(ret);

    return 0;
}
