#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int a;

	a++++;	// CE: expression is not assignable

	return 0;
}
