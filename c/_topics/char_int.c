#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char c = 'a';	// movb	$0x61, -0x11(%rbp)

	// char to int: movsbl	-0x11(%rbp), %esi
	// x64 default use rsi for second arg: why esi? because arg is only
	// 4 bytes.
	printf("%c\n", c);	
	return 0;
}
