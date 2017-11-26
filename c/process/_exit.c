#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
    printf("hello, my cat");
	_exit(1);	// won't flush the streams, so the previous line won't output

    return 0;
}
