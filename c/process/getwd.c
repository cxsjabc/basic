#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char *wd;
	char buf[6];

	wd = getwd(buf);
	PS(wd);

    return 0;
}
