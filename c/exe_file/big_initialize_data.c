#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

// compile: ./mr.sh big_initialize_data.c -DSIZE=20000

#ifndef SIZE
#define SIZE (1024 * 1024)
#endif

int	global[SIZE] = { 0 };

// will hang ??
// int	global[1024 * 1024 * 1024] = { 0 };

int main(int argc, char *argv[])
{
    printf("hello, my cat\n");
    return 0;
}
