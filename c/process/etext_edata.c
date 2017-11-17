#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

extern char etext, edata;

int main()
{
	printf("etext:%p, edata:%p\n", &etext, &edata);	// build error
    return 0;
}
