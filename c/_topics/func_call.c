#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

void show()
{
	printf("hello!\n");
}

int main(int argc, char *argv[])
{
	show;
	return 0;
}
