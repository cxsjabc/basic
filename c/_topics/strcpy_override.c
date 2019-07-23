#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char c = 'a';
	char s[4];

	PC(c);
	strcpy(s, "abcd");
	PC(c);

    return 0;
}
