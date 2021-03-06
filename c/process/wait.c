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
		sleep(3);
		exit(9);
	} else {
		pid_t child;
		int status;
		printfp("\n");
		child = wait(&status);
		if(WIFEXITED(status)) {
			printfp("child exit status:%d\n", WEXITSTATUS(status));
		}	
	}
	printf("end\n");
    return 0;
}
