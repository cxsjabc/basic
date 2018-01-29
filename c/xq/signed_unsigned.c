#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

// you can use compile option to force char to signed or unsigned:
//  -fsigned-char, -funsigned-char

int main(int argc, char *argv[])
{
	signed char c = 127;
	unsigned char c1 = 127;

	printf("%d, %d\n", (signed char)c, (signed char)(c + 1));
	printf("%d, %d\n", (unsigned char)c1, (unsigned char)(c1 + 1));
    return 0;
}
