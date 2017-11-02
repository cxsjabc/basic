#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;

	res = execl("/bin/ps", "ps", "-a", NULL);
	PD(res);
	PS("main ends!\n");
    return 0;
}
