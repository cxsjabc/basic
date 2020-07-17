/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct __attribute((packed))
{
	char  c;
	int   i;
} char_int;

int main(int argc, char *argv[])
{

	char_int ci;
	
	printf("c: %p, i: %p\n", &ci.c, &ci.i);

	return 0;
}
