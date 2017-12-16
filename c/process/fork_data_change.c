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

	printf("before fork\n");
	pid = fork();
	if(pid < 0)
		perror("fork error!\n");
	else if(pid == 0) {
		printfc("\n");
		++data;
	} else {
		printfp("\n");
		sleep(2);
	}
	printf("pid:%d, data:%d\n", getpid(), data);
    return 0;
}
