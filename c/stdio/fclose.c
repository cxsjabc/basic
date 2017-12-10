#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int res;

	res = fclose(12);	// will crash
	PD(res);

    return 0;
}
