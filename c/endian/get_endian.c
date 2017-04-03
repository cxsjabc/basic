#include <stdio.h>

struct st{ char a; char b; };	
typedef union
{
	short s;
	struct st    ss;
}Endian;

int main()
{
	int a;
	int b;
	Endian e;
	e.s = 0xFFFE;

    //printf("%d\n", (&a > &b));
	printf("%x %x\n", e.ss.a, e.ss.b);
    return 0;
}
