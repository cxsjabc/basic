#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	printf("%2$d,%1$d", 20, 10);	// %2 means the second argument
    return 0;
}
