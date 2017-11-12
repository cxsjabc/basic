// define restrict for finding where restrict is located
// compile error: but it is our expectation.
#define	restrict xxx

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"


int main()
{
    printf("hello, my cat\n");
    return 0;
}
