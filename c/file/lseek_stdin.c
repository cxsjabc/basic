#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int res;

	res = lseek(STDIN_FILENO, 0, SEEK_END);
	PD(res);

    return 0;
}
