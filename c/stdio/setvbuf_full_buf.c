#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#define DEF_FULL_BUF_SIZE   3

int main(int argc, char *argv[])
{
	int res;
	int full_buf = 0;
	char *buf;
	int full_buf_size;

	full_buf_size = DEF_FULL_BUF_SIZE;

	if(argc > 1) {
		full_buf = atoi(argv[1]);
		if(full_buf != 0)
			full_buf = 1;
	}
	if(argc > 2) {
		full_buf_size = atoi(argv[2]);
		if(full_buf_size <= 0)
			full_buf_size = DEF_FULL_BUF_SIZE;
	}

	buf = malloc(full_buf_size);
	assert(buf);
	if(full_buf) {
		res = setvbuf(stdout, buf, _IOFBF, full_buf_size);
		PD(res);
	}

	printf("mao");
	fprintf(stderr, "xiyi");	

	free(buf);

    return 0;
}
