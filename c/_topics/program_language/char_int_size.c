/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	char c = 'a';
	int i = 0xFFFEFDFC;

	printf("c: %p, i: %p\n", &c, &i);

	return 0;
}
