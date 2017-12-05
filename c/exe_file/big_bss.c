#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

// although bss is big, but the executable file is small.
// because bss block is initialized to zero when process is running, 
// the disk doesn't store the data.
int	bss[1024 * 1024 * 1024];

int main(int argc, char *argv[])
{
    printf("hello, my cat\n");
    return 0;
}
