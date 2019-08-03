#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"


typedef int (*arr)[1];

arr pf(int a)
{
	int temp[1];
	return temp;
}

int (*(*f)(int))[1] = pf;

int main(int argc, char *argv[])
{
	printf("hello, my cat\n");
	return 0;
}
