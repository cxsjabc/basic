#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int c;
	char *p;
	char buf[4096];
	int ps;
	char *pbuf;

	ps = getpagesize();
	PD(ps);
	pbuf = (char *)malloc(ps);
	assert(pbuf);

	while((p = fgets(buf, ps, stdin)) != NULL)
		fputs(buf, stdout);

	if(ferror(stdin))
		printf("stdin error!\n");
    return 0;
}
