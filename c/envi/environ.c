#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

extern char **environ;

int main()
{
	char **ep;

	for(ep = environ; *ep != NULL; ++ep)
		puts(*ep);
    return 0;
}
