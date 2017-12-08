#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char *cwd;

	cwd = getcwd(NULL, 0);
	PS(cwd);

	free(cwd);
    return 0;
}
