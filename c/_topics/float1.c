#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	double d;

	scanf("%lf", &d);
	printf("%f\n", d);

	return 0;
}
