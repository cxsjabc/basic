#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#define show_str(limit)	printf(#limit)

#define pr_limit(limit)	show_limit(#limit, limit)

int main(int argc, char *argv[])
{
	int res;
	struct rlimit rl;
//	res = getrlimit(RLIMIT_CPU, &rl);
	res = getrlimit(RLIMIT_STACK, &rl);
	PD(res);

	printf("rlim_cur:%llu, rlim_max:%llu\n", rl.rlim_cur, rl.rlim_max);
	show_str(RLIMIT_FILE);

    return 0;
}
