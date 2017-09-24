#include <stdio.h>

#include "common_local.h"


int main()
{
	int a = '\12';
#if 0
    printf("%d\n", a);
#endif
	
#if 0
	{
		int a = 2147483647;
		printf("a:%d, a+1:%d\n", a, a + 1);
		a = -2147483648;
		printf("a:%d, a-1:%d\n", a, a - 1);
	}
#endif

#if 0
	{
		float f1 = 123456789.12345, f2 = 123456789.12345;
		
		while(1) {	
			printf("%f %f\n", f1, f2);	
			printf("%.10f %.10f\n", f1, f2);	
			scanf("%f%f", &f1, &f2);
			printf("%f %f\n", f1, f2);	
		}
	}
#endif

#if 0
	{
		int i;
		TS(10000)
			i = 1;  // this is very fast: about 1ns, malloc costs 40ns
		TE
	}
#endif

#if 0
{
	int a = 1000000000, b = 2000000000;
	a = a + b;	// although a is overflow, but the switch below is right.
	printf("a: %#x %d\n", a, a);
	b = a - b;
	printf("b: %#x %d\n", b, b);
	a = a - b;
	printf("a: %#x %d\n", a, a);
}
#endif

#if 1
	{
		int a = -1;
		unsigned b = -1;

		printf("a: %d, b:%d\n", (a >=0 && ~a >= 0), (b >= 0 && ~b >= 0));	
	}
#endif

    return 0;
}
