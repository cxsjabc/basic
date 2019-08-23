#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	float f1 = 3.000000001;
	float f2 = 3.000000002;

	printf("%f %s %f\n", f1, (f1 > f2 ? ">" : "<="), f2);
	return 0;
}
