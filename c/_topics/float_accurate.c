#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	float f = 3.1;

	printf("%f", f);
	return 0;
}
