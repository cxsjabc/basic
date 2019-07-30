#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	printf("hello, my cat: ver:%s@%s\n", __DATE__, __TIME__);
	return 0;
}
