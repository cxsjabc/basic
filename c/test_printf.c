#include <stdio.h>

int main()
{
#if 0
	char *s = "hello%seyu";
	printf("%s\n", s);
	printf(s);
#endif

#if 1
	//printf("%c", "\n");
	// puts('\n');
//	printf('\n');
	//printf("%s", '\n');
	putchar("\n");
#endif


 
   return 0;
}
