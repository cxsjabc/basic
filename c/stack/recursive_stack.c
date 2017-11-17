#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

void empty()
{
	empty();
}

int main()
{
	empty();	// crash: segment fault 
    return 0;
}
