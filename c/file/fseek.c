#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	FILE *fp;
	int res;
	size_t size;
	char buf[128];

	fp = fopen("in", "r+");
	assert(fp);

	res = fseek(fp, 1, SEEK_SET);
	PD(res);

	size = fread(buf, 1, 1, fp);
	PUL(size);
	PC(buf[0]);

	fclose(fp);
    return 0;
}
