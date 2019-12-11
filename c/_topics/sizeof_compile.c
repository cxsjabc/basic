#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#if 0
#if sizeof(int) == sizeof(long)	 // CE
#warning "sizeof(int) == sizeof(long)"
#endif
#endif

#define _sizeof(T)	((int)((T *)0 + 1))

#if 0
#if _sizeof(int) == _sizeof(long)	 // CE
#warning "sizeof(int) == sizeof(long)"
#endif
#endif

int main(int argc, char *argv[])
{
	printf("hello, my cat\n");
	return 0;
}
