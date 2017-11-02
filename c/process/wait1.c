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
		int i;

		printfc("\n");
		sleep(1);
		i = i / 0;	
		exit(9);
	} else {
		pid_t child;
		int status;
		printfp("\n");
		sleep(1);
		child = wait(&status);
		if(WIFEXITED(status)) {
			printfp("child exit status:%d\n", WEXITSTATUS(status));
		}	
		if(WIFSIGNALED(status)) {
			printfp("child signal status:%d\n", WTERMSIG(status));
		}	
		if(WIFSTOPPED(status)) {
			printfp("child stopped status:%d\n", WSTOPSIG(status));
		}	
	}
	printf("end\n");
    return 0;
}
