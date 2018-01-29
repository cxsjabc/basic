#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	float f = 1.0f;	// kernel code: never use float-point numbers
	int i = 10;

	printf("%f\n", f);
    return 0;
}
