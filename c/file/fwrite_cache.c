#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	FILE *fp;
	size_t size;

	fp = fopen("in", "r+");
	assert(fp);

	size = fwrite("modify", 6, 1, fp);
	PUL(size);

	sleep(10);	// now, maybe the file "in" doesn't change!

	printf("Now call fclose...\n");
	fclose(fp);

    return 0;
}
