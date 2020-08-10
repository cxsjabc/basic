/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	if(b > a)
		a = b;
	if(c > a)
		a = c;

	printf("%d\n", a);
	return 0;
}
