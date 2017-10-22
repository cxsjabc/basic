#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <gnu/libc-version.h>

#include "common_local.h"

int main()
{
    printf("glibc version:%s\n", gnu_get_libc_version());
    return 0;
}
