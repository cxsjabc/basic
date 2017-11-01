//#define NDEBUG

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	assert( 1 < 0);
    return 0;
}
