#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int res;

	res = setenv("AGIRL", "xq", 1);
	PS(getenv("AGIRL"));
    return 0;
}
