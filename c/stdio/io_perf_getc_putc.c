#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int c;

	while((c = getc(stdin)) != EOF)
		putc(c, stdout);

	if(ferror(stdin))
		printf("stdin error!\n");
    return 0;
}
