#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	char *cwd;
	char buf[128];

	cwd = getcwd(buf, 128);
	PS(cwd);
	cwd = getcwd(buf, 2);
	PS(cwd);
	if(cwd == NULL)
		perror("getcwd error");

    return 0;
}
