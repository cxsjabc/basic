#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
#define	BUF_SIZE	128
	int fd, fd1;
	off_t ofset;
	int res;
	ssize_t size;
	char buf[BUF_SIZE];
	long resl;

	fd = open("in", O_RDWR);
	assert(fd >= 0);
	fd1 = open("in", O_RDWR);
	assert(fd1 >= 0);
	
	memset(buf, 0, BUF_SIZE);
	size = read(fd, buf, 3);		
	PL(size);
	PS(buf);

	size = write(fd1, "mao", 3);		
	PL(size);

	ofset = lseek(fd, 0, SEEK_SET);	// pos: 0
	memset(buf, 0, BUF_SIZE);
	size = read(fd, buf, 3);		// "mao"
	PL(size);
	PS(buf);

	PD(close(fd1));
	PD(close(fd));
    return 0;
}
