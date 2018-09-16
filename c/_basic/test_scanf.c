#include <stdio.h>

int main()
{
	int a, b;
	char c;
	char s[32];

#if 1
	scanf("%d", &a);	// input: 2147483648, will print: -2147483648 (overflow)
	printf("%d\n", a);
#endif

#if 0
	// scanf("  %i,%c", &a, &c);
	// printf("|%d| |%c|\n", a, c);
    printf("%12.5e", 30.253);
    printf("%.4f", 83.162);
    printf("%-6.2g", .0000009979);
#endif

#if 0
	{
		sscanf("12abc34 56def78", "%d%s%d", &a, s, &b);	// 
		printf("|%d|%s|%d|\n", a, s, b);		
	}
	
#endif

#if 0
	{
		while(1) {
			int n;
			int ret;
			ret = scanf("%d", &n);	// if Ctrl + D, return value: -1.
			printf("ret:%d\n", ret);
		}	
	}
#endif

	return 0;
}
