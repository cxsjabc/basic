#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#define BUILD_BUG_ON(condition)		((void)sizeof(char[1 - 2* !!(condition)]))

int main(int argc, char *argv[])
{
	BUILD_BUG_ON(sizeof(int) == sizeof(long));
	BUILD_BUG_ON(sizeof(int) > sizeof(long));
	BUILD_BUG_ON(sizeof(int) < sizeof(long));
	BUILD_BUG_ON(sizeof(int) == 4);
	return 0;
}
