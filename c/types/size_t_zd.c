#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	size_t a = 1;
	ssize_t b = 2;
	printf("%zd %zd\n", a, b);
    return 0;
}
