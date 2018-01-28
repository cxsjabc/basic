#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int	* get_local_pointer_value()
{
	int a = 100;
	int b = 101;
	int *pb = &b;
	
	*pb = 102;
	*(pb + 1) = 103;

	return &a;
}

int main(int argc, char *argv[])
{
	printf("%d\n", *(get_local_pointer_value()));
    return 0;
}
