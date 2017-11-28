#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

void func(int a, void *p, int c)
{
	printf("&a:%p, p:%p, &c:%p\n", &a, p, &c);
}

int main()
{
	int a = 1;
	int b = 2;
	void *p;

	func(a, alloca(1024), b);		// book tell me it's wrong! I don't know why.
    return 0;
}
