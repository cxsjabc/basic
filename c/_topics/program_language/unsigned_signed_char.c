/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	signed char c = 0x80;
	int i = c;
	unsigned u = c;

	printf("%d %d %d\n", c, i, u);
	printf("%u %u %u\n", c, i, u);
	return 0;
}
