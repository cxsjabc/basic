#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	FILE *fp;
	int fd;

	fp = fopen("in", "r+");
	assert(fp);

	fd = fileno(fp);
	PD(fd);

	fclose(fp);
    return 0;
}
