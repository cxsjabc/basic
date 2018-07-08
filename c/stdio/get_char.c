#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int c;

	c = getchar();
	printf("|%c|\n", c);
	
    return 0;
}
