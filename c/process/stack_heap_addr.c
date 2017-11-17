#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int gi;

int main()
{
	int i;
	char *p;

	p = (char *)malloc(128);
	PP(&i);
	PP(p);
	PP(&gi);

    return 0;
}
