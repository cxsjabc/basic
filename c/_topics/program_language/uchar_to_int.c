/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>

int uchar_to_int(unsigned char c)
{
	return c;
}

int main(int argc, char *argv[])
{
	unsigned char c;

	scanf("%c", &c);
	printf("%d\n", uchar_to_int(c));

	return 0;
}
