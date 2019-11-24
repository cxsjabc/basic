#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char hello[] = {'H', 'e', 'l', 'l', 'o'};

	printf("%s\n", hello);
	return 0;
}
