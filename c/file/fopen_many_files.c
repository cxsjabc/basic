#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	FILE *fp;
	int i = 0;

	while(1) {
		fp = fopen("in", "r+");
		if(!fp)
			break;
		++i;
	}
	
	printf("fopen files count:%d\n", i);	// result should be: 253 if ulimit -n: 256
	// here, don't want to close fp

    return 0;
}
