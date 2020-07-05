#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void dump_stdout_buffer()
{
	FILE *fp;
	unsigned char *buf;
	int size;

	fp = stdout;
	buf = fp->_bf._base;
	size = fp->_bf._size;

	write(1, "stdout buffer:", strlen("stdout buffer:"));
	write(1, buf, size);
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	printf("cat");
	dump_stdout_buffer();
	printf("dog");
	dump_stdout_buffer();
	printf("\n");

	return 0;
}
