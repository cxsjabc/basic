#include <stdio.h>
#include <unistd.h>

#include "common_local.h"

#define	MAX_SIZE	128

int main()
{
	char buf[MAX_SIZE + 1];
	ssize_t nread;

	nread = read(STDIN_FILENO, buf, MAX_SIZE);
	if(nread > 0) {
		buf[nread] = '\0';
		PS(buf);
	}
	

    return 0;
}
