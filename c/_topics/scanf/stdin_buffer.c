/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void check_stdin_buffer()
{
	FILE *fp = stdin;
	unsigned char *p;
	int size;

	p = fp->_p;
	size = p ? strlen((const char *)p) : 0;

	write(1, "stdin buffer:", strlen("stdin buffer:"));
	write(1, p, size);
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	int n;

	// stdin buffer should be empty now!
	check_stdin_buffer();

	// input one integer
	scanf("%d", &n);
	// current input buffer should be the extra string getting rid of the previous int
	check_stdin_buffer();

	// set the current input buffer character to 'X'
	stdin->_p[0] = 'X';	
	check_stdin_buffer();

	return 0;
}
