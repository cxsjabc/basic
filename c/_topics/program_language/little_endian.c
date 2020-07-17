/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int is_little_endian()
{
	short a = 0x1;

	return *(char *)&a == 0x1;
}

int main(int argc, char *argv[])
{
	int little_endian;

	little_endian = is_little_endian();

	printf("%s little endian!\n", little_endian ? "is" : "isn't");
	return 0;
}
