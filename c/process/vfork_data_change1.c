#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#define printfc(fmt, arg ...)	printf("[Child]" fmt, ##arg)
#define printfp(fmt, arg ...)	printf("[Parent]" fmt, ##arg)
#define printf(fmt, arg ...)	printf("pid:%d@%d" fmt, getpid(), __LINE__, ##arg)

int data = 100;

int main()
{
	pid_t pid;

	printf("before vfork\n");
	pid = vfork();
	if(pid < 0)
		perror("vfork error!\n");
	else if(pid == 0) {
		printfc("\n");
		++data;
		_exit(1);
	} else {
		printfp("\n");
	}
	// because sub child call _exit, the log may be lost
	printf("pid:%d, data:%d\n", getpid(), data);
    return 0;
}
