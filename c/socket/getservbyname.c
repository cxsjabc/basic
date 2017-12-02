#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	char *host;
	struct hostent *hostinfo;
	char **names, **addrs;
	struct servent *servinfo;

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

	servinfo = getservbyname("daytime", "tcp");
	assert(servinfo);
	printf("daytime port:%d\n", ntohs(servinfo->s_port));

    return 0;
}
