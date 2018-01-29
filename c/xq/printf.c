#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i = 100;
    printf("sizeof(int):%zu\n", sizeof(int));
	printf("%d, %ld, %u, %lu, %lld, %llu\n", 100, (long)100, (unsigned)100, (unsigned long)100, (long long)100, (unsigned long long)100);
	printf("%p, 0x%08x\n", &i, i);
    return 0;
}
