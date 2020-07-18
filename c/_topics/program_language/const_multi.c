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
	int j = i;
	int k = i;
	int m = 2;

	printf("%p %p %p %p\n", &i, &j, &k, &m);

	return 0;
}
