#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char s[12];
	
	s[0] = 'x';
	s[1] = 'q';
	s[2] = '\0';

	s[3] = 'b';
	s[4] = 'e';
	s[5] = 'n';
	s[6] = '\0';

	printf("%s %s\n", s, &s[3]);

    return 0;
}
