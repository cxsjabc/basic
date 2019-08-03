#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

void show()
{
	printf("show(func)!\n");
}

#define show()	{printf("show(macro)!\n");}

int main(int argc, char *argv[])
{
	show();
	return 0;
}
