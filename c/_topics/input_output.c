#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int c;

	while((c = getchar()) != EOF)
		putchar(c);

	return 0;
}
