#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#define	N	(1024 * 1024 * 1024)

int main(int argc, char *argv[])
{
	int *p;
	int i = N;
	int cnt = 8;

	/* memory is allocated once by once, then system will tip:memory is less */
	while(cnt--) {
		i = N;
		p = (int *)malloc(N * sizeof(int));
		PP(p);
	
		while(--i)	
			p[i] = i;
	}
	sleep(100);

    return 0;
}
