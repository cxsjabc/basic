#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	FILE *fp;
	int c;

	fp = fopen("in", "a+");
	assert(fp);

	c = fputc('t', fp);
	PC(c);

	fclose(fp);
    return 0;
}
