#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

// compile: gcc-4.7 gcc-4.7.c -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk

int main(int argc, char *argv[])
{
    printf("hello, my cat\n");
    return 0;
}
