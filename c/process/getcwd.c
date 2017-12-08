#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char *cwd;
	char buf[128];

	cwd = getcwd(buf, 128);
	PS(cwd);

    return 0;
}
