#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	FILE *fps, *fpd;
	int cnt;
	char buf[4096];
	int res;
	int i;

	if(argc != 4)
		return -1;

	fps = fopen(argv[1], "r");
	assert(fps);
	fpd = fopen(argv[3], "w");
	assert(fpd);
	cnt = atoi(argv[2]);
	if(cnt <= 0)
		cnt = 1;

	for(i = 1; i <= cnt; ++i) {
		fseek(fps, 0, SEEK_SET);
		while(fgets(buf, 4096, fps) != NULL) {
			res = fputs(buf, fpd);
			if(res < 0) {
				printf("write file error!\n");
				return -1;
			}	
		}	
	}

	fclose(fpd);
	fclose(fps);
    return 0;
}
