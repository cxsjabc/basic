#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char *p = 0;

	((int *)p)++;	// compile error: lvalue casts are not supported
	return 0;
}
