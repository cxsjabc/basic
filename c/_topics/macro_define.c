#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#define MIX_MACRO	\
	#ifdef A	\
		a		\
	#else		\
		b		\
	#endif		

int main(int argc, char *argv[])
{
	int a, b;
	MIX_MACRO = 1;

	return 0;
}
