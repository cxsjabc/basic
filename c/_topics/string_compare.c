#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char *s = "maomao";
	
	if(s == "maomao")
		printf("hello, my cat\n");
	return 0;
}
