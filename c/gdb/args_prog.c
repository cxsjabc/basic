#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
    printf("hello, my cat\n");
	if(argc == 2)
		printf("argc:%d, argv[1]:%s\n", argc, argv[1]);    

    return 0;
}
