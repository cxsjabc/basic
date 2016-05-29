#include <stdio.h>

#ifndef MACRO1
#define MACRO1		'2'
#endif

int main()
{

	#if MACRO1 == '1'
		printf("is 1\n");
	#endif
	#if MACRO1 != '1'
		printf("is not 1\n");
	#endif
    return 0;
}
