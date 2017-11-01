#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

void do1()
{
	int i;
	int j;

	for(i = 0; i < 10000000; ++i)
		j++;
}

void do2()
{
	int i;
	int j;

	for(i = 0; i < 100000; ++i)
		j++;
}

int main()
{
	int i;
	int j = 0;

	for(i = 0; i < 10; ++i)
		j += i;
	
	do1();
	do2();

    return 0;
}
