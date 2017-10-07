#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;

	res = link("in", "in_link");
	PD(res);

    return 0;
}
