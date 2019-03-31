#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int ret;

	ret = printf("123");
	PD(ret);
	ret = printf("猫");
	PD(ret);
	ret = printf("%x", 123);
	PD(ret);
	ret = printf("\u732B");
	PD(ret);
	ret = printf("\x73\x2B");
	PD(ret);

    return 0;
}
