#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	FILE *fp;

	fp = fdopen(STDOUT_FILENO, "w");
	PP(fp);

    return 0;
}
