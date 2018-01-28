#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

void use_pointer(int *pi)
{
	pi = NULL;
}

int main(int argc, char *argv[])
{
	int i = 100, *pi = &i;

	use_pointer(pi);
	printf("%p\n", pi);
    return 0;
}
