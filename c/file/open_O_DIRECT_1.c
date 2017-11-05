#define _GNU_SOURCE 

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

// now, we find MAC don't have O_DIRECT
// so i test on linux
// bugs..
int main(int argc, char *argv[])
{
	int fd;
	ssize_t nsize;	
	char buf[128];
	int cnt = 1;
	int direct;
	char *p;
	int res;
	int pagesize;

	if(argc <= 1 || argc > 3)
		return -1;	
	if(argc > 1)
		cnt = atoi(argv[1]);
	if(argc > 2)
		direct = atoi(argv[2]);

	fd = open("xixi", direct ? O_DIRECT : 0 | O_WRONLY);
	if(fd >= 0) {
		printf("open successful!\n");
	} else {
		perror("open failed!\n");
	}
	PD(fd);

	pagesize = getpagesize();
	PD(pagesize);
	res = posix_memalign((void **)&p, pagesize, pagesize);
	assert(res == 0);
	PP(p);
	memset(p, 'a', pagesize);

	TS(cnt)
	nsize = write(fd, p, pagesize); // If O_DIRECT, why return bad file descriptor??
	//PL(nsize);
	if(nsize < 0) {
		perror("write failed!");
	}
	TE

	#if 0
	nsize = read(fd, buf, 6);
	PL(nsize);
	if(nsize < 0) {
		perror("read failed!");
	}
	#endif

	close(fd);
    return 0;
}
