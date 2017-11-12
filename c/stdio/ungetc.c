#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int c;

	c = getc(stdin);
	PC(c);

	if(c == 'a') {
		c = ungetc('b', stdin);
		PC(c);
	}
	c = getc(stdin);
	PC(c);
	
    return 0;
}
