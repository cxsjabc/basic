#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
#ifdef _POSIX_SOURCE
	#warning "defined _POSIX_SOURCE"
#endif
#ifdef _POSIX_C_SOURCE
	#warning "defined _POSIX_C_SOURCE"
#if _POSIX_C_SOURCE == 200809
	#warning "is 200809"
#endif
#endif
#ifdef _BSD_SOURCE
	#warning "defined _BSD_SOURCE"
#endif
#ifdef _SVID_SOURCE
	#warning "defined _SVID_SOURCE"
#endif
    return 0;
}
