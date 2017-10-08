#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#include "common_local.h"

#define	DIR_NAME	"dir1"

int main()
{
	int res;
	
	res = rmdir(DIR_NAME);
	printf("rmdir %s return:%d\n", DIR_NAME, res);

	res = mkdir(DIR_NAME, S_IRWXU);
	printf("mkdir %s return:%d\n", DIR_NAME, res);
	if(res == 0) {
		res = mkdir(DIR_NAME, S_IRWXU);
		printf("Dir %s exists, mkdir %s return:%d\n", DIR_NAME, DIR_NAME, res);
	}

    return 0;
}
