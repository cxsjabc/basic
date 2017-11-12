#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int c;
	int buf_size = 4096;
	char buf[4096];
	char *p;

	p = buf;
	if(argc == 2)
		buf_size = atoi(argv[1]);
	if(buf_size <= 0)
		buf_size = 4096;
	else if(buf_size > 4096) {
		p = (char *)malloc(buf_size);
		assert(p);
	}

	while(read(STDIN_FILENO, p, buf_size) > 0)
		write(STDOUT_FILENO, p, buf_size);

	if(ferror(stdin))
		printf("stdin error!\n");
    return 0;
}
