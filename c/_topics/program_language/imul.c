/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>

unsigned int mul(unsigned int i, unsigned int j)
{
	return i * j;
}

int imul(int i, int j)
{
	return i * j;
}

int main(int argc, char *argv[])
{
	unsigned int i, j;

	scanf("%d%d", &i, &j);
	printf("%d %d\n", mul(i, j), imul(i, j));
	return 0;
}
