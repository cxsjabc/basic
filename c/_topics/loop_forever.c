#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i;
	int a[2];

	printf("&a:%p, &i:%p\n", a, &i);

	/* doesn't loop forever */
	for(i = 0; i <= 2; ++i)
		a[i] = 0;
	/* will abort... */

	return 0;
}
