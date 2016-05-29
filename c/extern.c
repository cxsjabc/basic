#include <stdio.h>

extern int *d;

int main()
{
    printf("hello eyu\n");
    printf("%d\n", d[0]);
    return 0;
}
