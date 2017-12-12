#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	struct passwd *pw;

	pw = getpwuid(502);
	assert(pw);

	printf("name:%s, passwd:%s, uid:%d, shell:%s, dir:%s\n", pw->pw_name,
		pw->pw_passwd, pw->pw_uid, pw->pw_shell, pw->pw_dir);
    return 0;
}
