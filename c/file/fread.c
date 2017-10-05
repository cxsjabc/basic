#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	FILE *fp;
	size_t size;
	char buf[128];

	fp = fopen("in", "r+");
	assert(fp);

	size = fread(buf, 4, 3, fp);
	PUL(size);
	if(size > 0) {
		buf[size * 4] = '\0';
		PSS(buf);
	}

	fclose(fp);
    return 0;
}
