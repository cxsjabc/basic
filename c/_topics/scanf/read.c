#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int ret;
	char buf[16] = {0};
	
	ret = read(0, buf, 15);
	if (ret > 0)
		printf("|%s|\n", buf);
	return 0;
}
