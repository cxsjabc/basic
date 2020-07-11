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

	if ((ret = scanf("%d %d", &a, &b)) == 2) 
		printf("a:%d, b:%d, ret:%d\n", a, b, ret);
	else
		printf("scanf error:%d\n", ret);

	return 0;
}
