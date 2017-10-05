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

	size = fwrite("aabbccdd", 2, 4, fp);
	PUL(size);

	rewind(fp);
	size = fread(buf, 2, 4, fp);
	PUL(size);
	print_str(buf, size * 2);	

	fclose(fp);
    return 0;
}
