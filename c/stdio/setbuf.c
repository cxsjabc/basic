#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	printf("cat");
	fprintf(stderr, "error");

	setbuf(stdout, NULL);
	printf("eyu");		// will output immediately
	fprintf(stderr, "error");

    return 0;
}
