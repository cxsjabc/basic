#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;

	res = symlink("in", "soft_link_to_in");
	PD(res);

    return 0;
}
