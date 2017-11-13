#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;
	int i = 10;
	char c = 'a';
	char buf[2];

	PC(c);	
	res = sprintf(buf, "%d", i);	// crash
	PD(res);
	//PS(buf);

    return 0;
}
