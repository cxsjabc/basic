#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	PU(sizeof(char **));
	PU(sizeof(char ***));
    return 0;
}
