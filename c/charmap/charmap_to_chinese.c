#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

// a strange character
char s[] = "中";

int main()
{
	char buf[128];
	int res;

	printf("sizeof s:%d\n", sizeof(s));
	res = scanf("%s", buf);
	assert(res > 0);
	PS(buf);
	PD(strlen(buf));

    return 0;
}
