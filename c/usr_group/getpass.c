#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char *pa;

	pa = getpass("enter password");
	PS(pa);

    return 0;
}
