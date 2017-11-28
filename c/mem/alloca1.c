#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int a = 1;
	int b = 2;
	void *p;

	printf("&a:%p, &b:%p\n", &a, &b);
	p = alloca(8 * 1024 * 1024);	// segment error
	printf("p:%p\n", p);
	
    return 0;
}
