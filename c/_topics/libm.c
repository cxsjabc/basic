#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <math.h>

#include "common_local.h"

#undef PI
#define PI	3.1415926

int main(int argc, char *argv[])
{
	double d;

	d = sin(PI / 2);
	printf("%f\n", d);
	return 0;
}
