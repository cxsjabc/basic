#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	FILE *fp;

	fp = tmpfile();
	assert(fp);

    return 0;
}
