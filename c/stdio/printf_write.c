#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
    printf("hello, my cat");
	// it will output before the line above
	write(STDOUT_FILENO, "hello, my xiyi", strlen("hello, my xiyi"));
    return 0;
}
