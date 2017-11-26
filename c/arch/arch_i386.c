#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

// compile option:
// clang -arch x86_64 arch_i386.c
// clang -arch i386 arch_i386.c
// use otool -vt <executable_file> to find the assemble code

int main()
{
    printf("hello, my cat\n");
    return 0;
}
