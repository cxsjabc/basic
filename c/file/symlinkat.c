#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;

	res = symlinkat("in", AT_FDCWD, "soft_link_to_in");
	PI(res, "");

    return 0;
}
