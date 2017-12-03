#ifdef __STRICT_ANSI__
#warning "defined strict_andi"
#endif

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/* 1 the line below: use c89 to compile, will tip error, if c99, no error
*  2 it's strange that: use gcc or clang -std=c89, no error tips. 
*/
// c++ style comment
int main(int argc, char *argv[])
{
    printf("hello, my cat\n");
    return 0;
}
