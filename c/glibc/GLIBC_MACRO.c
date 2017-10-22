#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
#if __GLIBC__ >= 2 && __GLIBC_MINOR__ >= 12
#warning "glibc > 2.12"
#else
#warning "glibc < 2.12"
#endif
    return 0;
}
