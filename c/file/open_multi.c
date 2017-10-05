#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int fd;
	ssize_t nsize;	
	char buf[128];
	int cnt = 0;
	
	while(1) {
		fd = open("in", O_WRONLY);
		if(fd < 0) 
			break;
		++cnt;
	}
	PD(cnt);	// my os: 253

    return 0;
}
