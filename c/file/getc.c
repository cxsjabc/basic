#include <stdio.h>
#include <unistd.h>
#include <assert.h>

int main()
{
	FILE *fp;
	int c;
	int eof, err;

	fp = fopen("data.in", "r+");
	assert(fp);

	while((c = getc(fp)) != EOF) {
		printf("%x ", c);
	}
	eof = feof(fp);
	if(eof)
		printf("eof\n");
	err = ferror(fp);
	if(err)
		printf("file error\n");

	fclose(fp);
    return 0;
}
