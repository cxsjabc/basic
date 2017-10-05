#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int n;
    n = fprintf(stdout, "hello cat\n");
	PD(n);
    return 0;
}
