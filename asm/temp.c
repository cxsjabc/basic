#include <stdio.h>

struct temp
{
	int i;
	char ch;
}__attribute__((aligned(1)));

int main()
{
	struct temp temp1;
    printf("hello eyu %d\n", sizeof(struct temp));

    return 0;
}
