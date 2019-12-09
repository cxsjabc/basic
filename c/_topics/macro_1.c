#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#define f (x) ((x) + 1)

int main(int argc, char *argv[])
{
	PD(f(1));	// CE
	return 0;
}
