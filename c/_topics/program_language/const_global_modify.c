/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

const int i = 1;

int main(int argc, char *argv[])
{
	int *p;

	// modify i = 2
	p = &i;
	*p = 2;

	printf("%d %d\n", i, *p);

	return 0;
}
