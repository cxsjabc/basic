#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
    printf("cat:%d\n", _POSIX_THREADS);
    return 0;
}
