/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	const int i = 1;
	int *p;

	// modify i = 2
	p = &i;
	*p = 2;

	printf("%d %d\n", i, *p);

	return 0;
}
