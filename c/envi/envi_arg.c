#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

// too many parameters (5) for 'main': must be 0, 2, or 3
//int main(int argc, char *argv[], char *envi[], char** extra, char **extra1)

// why it can compile pass?
int main(int argc, char *argv[], char *envi[], char** extra)
{
	if(*extra)
		printf("*extra:%s\n", *extra);
    return 0;
}
