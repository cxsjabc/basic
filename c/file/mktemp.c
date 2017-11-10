#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int res;
	char temp[] = "somethingXXXXXX";
	char *ret;

	ret = mktemp(temp);	// just return the file name, the file is not created!
	PS(ret);

    return 0;
}
