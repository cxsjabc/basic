#include <stdio.h>
#include "common_local.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	char fc = 'a', sc = 'b';

	if(argc > 2) {
		fc = *argv[1];		
		sc = *argv[2];		
	}
	fp = fopen("data.file", "w+");
	if(fp == NULL) {
		perror("fopen fail!");
		return -1;
	}

	while(1) {
		static int flag;
		size_t size;
		int ret;
		char buf[128];

		buf[0] = fc;
		buf[1] = sc;
		buf[2] = '\0';
		ret = fseek(fp, 0, SEEK_SET);
		if(ret)
			perror("fseek error!");
		size = fwrite(buf, 1, 1, fp);
		if(size != 1)
			perror("fwrite first byte error!");
		
		printf("write byte 0:%c\n", buf[0]);

		// first time, write 'b' to the second byte of the file
		if(!flag) {
			size = fwrite(buf + 1, 1, 1, fp);
			if(size != 1)
				perror("fwrite second byte error!");
			flag = 1;
			printf("write byte 1:%c\n", buf[1]);
		}

		sleep(5);
	}

	fclose(fp);
    return 0;
}
