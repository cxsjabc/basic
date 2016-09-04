#include <stdio.h>

void print_each_byte(unsigned char *p, int size)
{
	int i = 0;
	for(; i < size; ++i) {
		printf("%#x ", *p);
		++p;
	}
	printf("\n");
}

int main()
{
    double d = 38414.4;
	int i;
	unsigned char *pc = (unsigned char *)&d;
	printf("sizeof(int):%d\n", sizeof(int));
	printf("|%x| |%d|, sizeof(int):%u\n", d, d, sizeof(int)); // output strange ????
	memcpy(&i, &d, sizeof(int));
	printf("%d %x\n", i, i);
	print_each_byte(pc, sizeof(d));
	return 0;
}
