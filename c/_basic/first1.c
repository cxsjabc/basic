#include <stdio.h>
#include <utime.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>

#define P_D(n)	printf(#n " %d\n", (n))

#define FILE_NAME	"hello.c"
#define int		short

int main()
{
	int ret;
	void * p;
	int i = 1;
	P_D(sizeof(int));
	pause();
	
    return 0;
}
