#include <stdio.h>

#define	MY_PRINT(fmt, args...)	printf(fmt, ##args)
#define	MY_PRINT1(fmt, ...)	printf(fmt, __VA_ARGS__)

int main()
{
    MY_PRINT("hello, my cat:%d\n", 1);
    MY_PRINT1("hello, my cat:%d\n", 1);
    return 0;
}
