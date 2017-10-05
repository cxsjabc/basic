#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	FILE *fp;

	fp = fopen("in", "r+");
	assert(fp);


	fclose(fp);
    return 0;
}
