#include <stdio.h>

int main()
{
	int a = 0xFE;
	int b;
	b = 0xFB;

	int c;
	c = 0xFA;
	printf("c addr:%p, b addr:%p\n", &c, &b);

    return 0;
}
