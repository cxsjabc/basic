#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int i;
	int j = 0;

	for(i = 0; i < 10; ++i)
		j += i;

    return 0;
}
