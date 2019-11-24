#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int a = 8;

	//a >> = 1;	// CE
	a >>= 1;

	printf("%d\n", a);
	return 0;
}
