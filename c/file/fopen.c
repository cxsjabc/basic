#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	FILE *fp;
	int res;
	
	fp = fopen("in", "r+");
	assert(fp);

	PD(fclose(fp));	// 0
	PD(fclose(fp));	// -1
	fclose(NULL);	// undefined: not crashed.

    return 0;
}
