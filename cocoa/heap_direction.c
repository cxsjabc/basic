#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int *p1, *p2;
	p1 = (int *)malloc(1);	
	p2 = (int *)malloc(1);	

	printf("%p %p\n", p1, p2);
    return 0;
}
