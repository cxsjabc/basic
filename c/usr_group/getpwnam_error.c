#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	struct passwd *pw;

	printf("errno:%d\n", errno);
	pw = getpwnam("bendan");
	if(pw == NULL) {
		printf("errno:%d\n", errno);
	}
    return 0;
}
