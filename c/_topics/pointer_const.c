#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int f(int *p)
{
	PD(*p);
}

int main(int argc, char *argv[])
{
	//f(&5);	// compile error
	f((int[]){5});	// build pass: compound literal
	return 0;
}
