#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int fd;
	ssize_t nsize;	
	char buf[128];
	int cnt = 1;
	int app_flag = 0;

	if(argc != 3)
		return -1;
	
	app_flag = atoi(argv[2]);	

	fd = open("xixi", O_WRONLY | O_CREAT | (app_flag == 1 ? O_APPEND : 0));
	if(fd >= 0) {
		printf("open successful!\n");
	} else {
		perror("open failed!\n");
	}


	while(1) {
		if(cnt > 100)
			break;
		nsize = write(fd, argv[1], strlen(argv[1]));
		//PL(nsize);
		if(nsize < 0) {
			perror("write failed!");
			break;
		}	

		usleep(1000);
		++cnt;
	}

	close(fd);
    return 0;
}
