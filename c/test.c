#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

#ifdef add
#warning "add is defined"
#else
#warning "add is not defined"
#endif

#define add(a, b)	(1 + 1)

int main()
{
	int ret;
    printf("hello eyu\n");
	ret = add(1, 2);
	printf("%d\n", ret);
    return 0;
}
