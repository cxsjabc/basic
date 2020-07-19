/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>

int char_to_int(signed char c)
{
	return c;
}

int main(int argc, char *argv[])
{
	char c;

	scanf("%c", &c);

	printf("%d\n", char_to_int(c));

	return 0;
}
