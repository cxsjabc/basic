#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	char *p;

	printf("sizeof pointer:%lu\n", sizeof(char *));
	p = 0x100000000;	// warning: p: 0x0 because of int conversion loss
	printf("%p\n", p);
    return 0;
}
