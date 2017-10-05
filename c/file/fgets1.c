#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	FILE *fp;
	char *p;
	char buf[128];

	fp = fopen("in", "r+");
	assert(fp);
	mem_zero(buf, 128);
	
	// including with '\n', the max characters count is 3
	while((p = fgets(buf, 4, fp)) != NULL) {	
		putchar('|');
		printf(buf);
		putchar('|');
	}
	if(ferror(fp))
		PS("file error!");
	if(feof(fp))
		PS("end of file!");

	fclose(fp);
    return 0;
}
