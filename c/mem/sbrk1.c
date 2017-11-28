#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

void	show_sbrk()
{
	void *p;
	p = sbrk(0);
	printf("[sbrk]: 0x%p\n", p);
}

int main()
{
	void *p;

	show_sbrk();
	p = malloc(100* 1024 * 1024);
	show_sbrk();
	
	
    return 0;
}
