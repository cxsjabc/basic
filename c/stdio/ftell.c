#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	FILE *fp;

	fp = fopen("in", "r+");
	assert(fp);
	PL(ftell(fp));

	fwrite("mao", 1, 1, fp);
	PL(ftell(fp));

	fwrite("mao", 3, 1, fp);
	PL(ftell(fp));

	fclose(fp);
    return 0;
}
