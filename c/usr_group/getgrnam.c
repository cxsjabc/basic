#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	struct group *g;
	char **mem;

	g = getgrnam("staff");
	assert(g);

	printf("name:%s, passwd:%s, gid:%d\n", g->gr_name, g->gr_passwd, g->gr_gid);
	for(mem = g->gr_mem; *mem != NULL; ++mem)
		printf("member:%s\n", *mem);
    return 0;
}
