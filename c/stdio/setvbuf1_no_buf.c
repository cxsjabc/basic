#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int res;
	int no_buf = 0;

	if(argc > 1) {
		no_buf = atoi(argv[1]);
	}
	if(no_buf) {
		res = setvbuf(stdout, NULL, _IONBF, 0);
		PD(res);
	}

	printf("mao");
	fprintf(stderr, "xiyi");	

    return 0;
}
