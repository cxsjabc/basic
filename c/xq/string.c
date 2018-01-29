#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char name[32];

	name[0] = 'x';
	name[1] = 'i';
	name[2] = 'a';
	name[3] = 'o';
	name[4] = 'q';
	name[5] = 'i';
	name[6] = 'n';
	name[7] = 'g';
	
	name[8] = '\0';
	name[9] = 'c';
	name[10] = '\0';

	printf("%s\n", name);
	printf("%s\n", name + 9);
    return 0;
}
