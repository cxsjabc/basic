#include <stdio.h>	
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int res;

	res = chmod("in", S_IXUSR);		// only user can execute, no read/write
	PD(res);

    return 0;
}
