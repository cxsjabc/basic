#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("gid:%ld\n", (long)getgid());
    return 0;
}
