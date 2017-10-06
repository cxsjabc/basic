#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	fprintf(stdout, "hello");
	fprintf(stderr, "err_hello");
    return 0;
}
