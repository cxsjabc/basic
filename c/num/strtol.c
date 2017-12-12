#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	long l;
	char *end;

	l = strtol("123", &end, 10);
	if(*end == '\0') {
		printf("valid string!\n");
		PL(l);
	}

    return 0;
}
