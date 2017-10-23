#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	intmax_t i1 = 100;
	size_t a = 1;
	ssize_t b = 2;
	printf("%zd %jd %jd %jd\n", sizeof(intmax_t), i1, a, b);
    return 0;
}
