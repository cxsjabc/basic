#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char *n;

	n = tmpnam(NULL);
	PS(n);
    return 0;
}
