#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int fd;
	off_t ofset;
	int res;

	// close(STDIN_FILENO);	// if close it, then scanf will be no effect
	scanf("%d", &fd);
	printf("%d", fd);

    return 0;
}
