#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

#define printfc(fmt, arg ...)	printf("[Child]" fmt, ##arg)
#define printfp(fmt, arg ...)	printf("[Parent]" fmt, ##arg)
#define printf(fmt, arg ...)	printf("pid:%d@%d" fmt, getpid(), __LINE__, ##arg)

int main()
{
	pid_t pid;

	printfp("\n");
	pid = fork();
	if(pid < 0)
		perror("fork error!\n");
	else if(pid == 0) {
		printfc("\n");
		exit(1);
	} else {
		printfp("\n");
	}
	printf("end\n");
    return 0;
}
