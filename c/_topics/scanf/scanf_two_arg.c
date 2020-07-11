/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int ret;
	int a, b;

	ret = scanf("%d %d", &a, &b);
	printf("a:%d, b:%d, ret:%d\n", a, b, ret);

	return 0;
}
