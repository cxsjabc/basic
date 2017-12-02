#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char *host;
	struct hostent *hostinfo;
	char **names, **addrs;

	if(argc == 1) {
		char name[256];
		gethostname(name, 256);
		host = name;
	} else
		host = argv[1];
	
	PS(host);
	hostinfo = gethostbyname(host);
	assert(hostinfo);

	printf("host:%s\n", host);
	printf("name: %s\n", hostinfo->h_name);
	printf("aliases: ");
	names = hostinfo->h_aliases;
	while(*names) {
		printf(" %s ", *names);
		names++;
	}
	printf("\n");

    return 0;
}
