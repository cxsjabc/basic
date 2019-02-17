#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

static inline void show()
{
    printf("show..\n"); 
}

int main(int argc, char *argv[])
{
    show();
    return 0;
}
