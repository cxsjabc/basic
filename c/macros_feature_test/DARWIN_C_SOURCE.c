#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"


// on mac: why _DARWIN_C_SOURCE and _POSIX_C_SOURCE is not defined??
#ifdef _DARWIN_C_SOURCE
	#warning "defined DARWIN_C_SOURCE"
#else
	#warning "not defined DARWIN_C_SOURCE"
#endif
#ifdef _POSIX_C_SOURCE
	#warning "defined POSIX_C_SOURCE"
#else
	#warning "not defined POSIX_C_SOURCE"
#endif


int main()
{
	
    return 0;
}
