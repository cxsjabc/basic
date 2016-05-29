#include <stdio.h>
#include "debug.h"


int main()
{
	void *p = malloc_debug(12);
	printf("malloc ...");
	if(p)
	{
		free_debug(p);
		printf("free a pointer\n");
		free_debug(p);
		printf("2 free a pointer\n");
	}

    printf("hello eyu\n");
	

    return 0;
}
