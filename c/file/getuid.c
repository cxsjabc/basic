#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("uid:%ld\n", (long)getuid());
    return 0;
}
