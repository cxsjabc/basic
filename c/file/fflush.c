#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	FILE *fp;
	
	fp = fopen("in", "r+");
	assert(fp);

	fwrite("xxxx", 4, 1, fp);
	fflush(fp);		// now, the "xxxx" should be in kernel fs cache, we can't assure xxxx is written to the file on disk, but kernel should be fast enough to make it successfully!

	printf("Now sleep for 10 seconds...\n");
	sleep(10);

	fclose(fp);
    return 0;
}
