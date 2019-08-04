#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	fprintf(stdaux, "hello, my cat\n");	// compile error: stdaux not defined!
	return 0;
}
