#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

static jmp_buf buf;

void	f2()
{
	longjmp(buf, 2);
}

void	f1(int argc)
{
	if(argc == 1)
		longjmp(buf, 1);
	f2();
}

int main(int argc, char *argv[])
{
	switch(setjmp(buf))	{
		case 0:
			f1(argc);
			break;
		case 1:
			printf("jumped from f1()\n");
			break;
		case 2:
			printf("jumped from f2()\n");
			break;
	}
    return 0;
}
