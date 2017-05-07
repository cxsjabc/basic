#include <stdio.h>

int main()
{
	int a = '\12';
#if 0
    printf("%d\n", a);
#endif
	
#if 1
	{
		int a = 2147483647;
		printf("a:%d, a+1:%d\n", a, a + 1);
		a = -2147483648;
		printf("a:%d, a-1:%d\n", a, a - 1);
	}
#endif

#if 1
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

    return 0;
}
