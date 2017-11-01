#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	char *p;

	p = (char *)malloc(1024);
	p[0]= '1';
	p[1024] = 'a';

	p = NULL;

    return 0;
}
