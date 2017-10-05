#include <stdio.h>
#include <unistd.h>

int main()
{
	void *p;
	
	p = sbrk(0);
	printf("%p\n", p);
	p = sbrk(0x100);
	printf("%p\n", p);
    return 0;
}
