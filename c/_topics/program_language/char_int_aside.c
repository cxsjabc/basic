/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	short h = 0xAABB;
	char c0 = 'b';
	char c = 'a';
	int i = 0xFFFEFDFC;

	printf("h: %p, c0: %p\n", &h, &c0);
	printf("c: %p, i: %p\n", &c, &i);

	return 0;
}
