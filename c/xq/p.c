#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

// use gdb: x /3w <addr>

int main(int argc, char *argv[])
{
	int i = 0xFFFEFDFC;
	int *pi = 0x12345678;

	printf("&i:%p, &pi:%p\n", &i, &pi);
    return 0;
}
