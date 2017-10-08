#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
    printf("hello%*scat\n", 4, "");
    return 0;
}
