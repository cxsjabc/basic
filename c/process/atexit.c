#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

void	myexit1()
{
	printf("myexit1\n");
}

void	myexit2()
{
	printf("myexit2\n");
}

int main()
{
	atexit(myexit1);
	atexit(myexit2);
	
	//_exit(1);	// don't call register func by atexit
	//_Exit(1);	// don't call register func by atexit

    return 0;
}
