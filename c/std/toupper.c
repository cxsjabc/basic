#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	char c = '0', c1 = 'a';

	printf("%c %c\n", toupper(c), toupper(c1));
    return 0;
}
