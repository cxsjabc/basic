#include <stdio.h>
#include "common_local.h"

int main()
{
#if 0
	TS(1000)
	printf("hello, cat!\n");
	TE
#endif
#if 1
	TS(1000)
	printf("hello, cat!");
	TE
#endif

#if 0
	char *s = "hello%seyu";
	printf("%s\n", s);
	printf(s);
#endif

#if 0
	//printf("%c", "\n");
	// puts('\n');
//	printf('\n');
	//printf("%s", '\n');
	putchar("\n");
#endif


 
   return 0;
}
