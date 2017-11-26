#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	struct passwd *pw;

	pw = getpwuid(getuid());
	printf("password:%s, dir:%s\n", pw->pw_passwd, pw->pw_dir);
    return 0;
}
