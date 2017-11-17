#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	pid_t pid;

	pid = getpid();
	PUL(pid);
    return 0;
}
