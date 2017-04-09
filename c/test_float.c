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
#if 0
    double d = 38414.4;
	int i;
	unsigned char *pc = (unsigned char *)&d;
	printf("sizeof(int):%d\n", sizeof(int));
	printf("|%x| |%d|, sizeof(int):%u\n", d, d, sizeof(int)); // output strange ????
	memcpy(&i, &d, sizeof(int));
	printf("%d %x\n", i, i);
	print_each_byte(pc, sizeof(d));
#endif
#if 1
	{
		double d;
		scanf("%lf", &d);
		printf("%.16lf\n", d);
		if(d > 0)
			printf("%lf > 0\n", d);
	}
#endif

#if 0
	{
		float d;
		scanf("%f", &d);
		printf("%f %.16f\n", d, d); // if you input: 123456789, the print may be not this value. Because the effective digit number contains the main part and digital part.
		if(d > 0)
			printf("%f > 0\n", d);
		if(d > 123456789)
			printf("%f > \n", d);
	}
#endif
	return 0;
}
