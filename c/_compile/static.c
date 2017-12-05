#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

// use compile option: -static
// on mac: will build error.

int main(int argc, char *argv[])
{
    printf("hello, my cat\n");
    return 0;
}
