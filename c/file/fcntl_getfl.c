#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int val;
	
	if(argc != 2) {
		printf("argc should be 2!\n");
		return -1;
	}

	val = fcntl(atoi(argv[1]), F_GETFL, 0);
	assert(val >= 0);

	if((val & O_ACCMODE) == O_RDONLY)
		printf("read only");
	if((val & O_ACCMODE) == O_WRONLY)
		printf(", write only");
	if((val & O_ACCMODE) == O_RDWR)
		printf(", read write");

    return 0;
}
