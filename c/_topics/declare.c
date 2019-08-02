#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	// can compile pass
	int unsigned a;
	int short unsigned b;
	int unsigned short c;
	return 0;
}
