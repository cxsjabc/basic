#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char *s;
	char temp[12] = "xixiXXXXXX";

	s = mkdtemp(temp);
	PS(s);
    return 0;
}
