#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#ifndef PD
#define PD(str)		printf(#str ":%d\n", (str))
#endif

int main(int argc, char *argv[])
{
	int ret;

	ret = printf("%j123");	// %j is a wrong format!
	PD(ret);

    return 0;
}
