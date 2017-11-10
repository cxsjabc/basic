#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;
	char temp[] = "somethingXXXXXX";

	res = mkstemp(temp);
	PD(res);

	//unlink(temp);
    return 0;
}
