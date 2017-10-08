#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	FILE *fp;
	off_t ofset;
	size_t size;
	char buf[128];	

	fp = fopen("in", "r");
	assert(fp);

	size = fwrite("mao", 3, 1, fp);
	PUL(size);
	if(ferror(fp))
		printf("fp is in error!\n");
	clearerr(fp);
	if(ferror(fp))
		printf("fp is still in error!\n");
	size = fread(buf, 3, 1, fp);
	PUL(size);
	print_str(buf, 3);

	fclose(fp);
    return 0;
}
