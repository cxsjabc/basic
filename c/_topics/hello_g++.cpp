#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

// comment.

#ifdef __cplusplus
#warning "defined __cplusplus"
#else
#warning "not defined __cplusplus"
#endif
int main(int argc, char *argv[])

{
    printf("hello, my cat\n");
    return 0;
}
