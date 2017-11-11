#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;
	int i, j;

	res = sscanf("maomao:2:3", "maomao:%d:%d", &i, &j);
	PD(res);
	PD(i);
	PD(j);

    return 0;
}
