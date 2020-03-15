#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#ifndef PD
#define PD(str)		printf(#str ":%d\n", (str))
#endif

#ifndef PD2
#define PD2(str1, str2) \
	printf(#str1 ":%d, " #str2 ":%d\n", (str1), (str2))
#endif

int main(int argc, char *argv[])
{
	int ret;
	int n;

	ret = printf("123%n4", &n);
	PD2(ret, n);

    return 0;
}
