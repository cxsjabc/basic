#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	uid_t uid = getuid();
	int res;

	PD(getuid());
	PD(geteuid());

	res = setreuid(uid, uid);
	PD(res);
	PD(getuid());
	PD(geteuid());

    return 0;
}
