#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

// use infinity loop to run the program, check whether 
// system memory leaks or not
// As I test, no memory leaks.

int main(int argc, char *argv[])
{
	void *p;

	p = malloc(100 * 1024 * 1024);
	
	PP(p);
	return 0;
}
