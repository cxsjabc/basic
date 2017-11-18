#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;

	res = setenv("XIYI", "xixi", 1);
	PD(res);

	PS(getenv("XIYI"));

	res = setenv("XIYI", "xixi1", 0);
	PD(res);
	PS(getenv("XIYI"));

	res = setenv("XIYI", "xixi1", 1);
	PD(res);
	PS(getenv("XIYI"));
    return 0;
}
