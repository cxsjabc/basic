#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char c = 'yes';		// no CE
	printf("hello, my cat\n");
	return 0;
}
