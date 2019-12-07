#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char c;

	while((c = getchar()) != EOF) {
		printf("%c ", c);	
	}
	return 0;
}
