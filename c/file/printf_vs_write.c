#include <stdio.h>
#include <unistd.h>

#include "common_local.h"

#define	N	100

int main()
{
	size_t ret;

	TS(N)
	ret = write(1, "hello", 5);  // stdout
	TE

	printf("\nret:%lu\n", ret);	

	TS(N)
	ret = printf("hello");  // stdout
	TE

    return 0;
}
