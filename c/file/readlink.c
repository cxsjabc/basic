#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;
	char buf[128];
	ssize_t size;

	memset(buf, 0, 128);
	size = readlink("soft_link_to_in", buf, 128);
	PUL(size);
	PS(buf);

    return 0;
}
