#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	FILE *fp;
	int c;

	fp = fopen("in", "r+");
	assert(fp);

	while((c = fgetc(fp)) != EOF) {
		printf("%c ", c);
	}
	if(ferror(fp))
		printf("file error!\n");
	if(feof(fp))
		printf("end of file!\n");

	fclose(fp);

    return 0;
}
