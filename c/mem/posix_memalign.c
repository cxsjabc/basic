#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;
	void *p;

	res = posix_memalign(&p, 1024 * sizeof(void *), 32000);
	PD(res);
	free(p);

    return 0;
}
