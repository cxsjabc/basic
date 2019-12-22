#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i = INT_MAX + 3;	
	printf("%d\n", i);
	return 0;
}
