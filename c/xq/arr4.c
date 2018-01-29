#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char s[128];	// local variable not initilized, never think that it equals to 0

	s[0] = 'a';
	s[1] = 'b';

	printf("%c\n", s[0]);
	printf("%s\n", s);
    return 0;
}
