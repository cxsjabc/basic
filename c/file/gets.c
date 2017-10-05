#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	char *p;
	char buf[128];

	while(p = gets(buf)) {
		printf("|%s|\n", p);
	}
	if(ferror(stdin))
		printf("stdin error!\n");
	if(feof(stdin))
		printf("end of stdin!\n");

    return 0;
}
