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
	pid_t curr_pid;

	printfp("\n");
	curr_pid = getpid();

	pid = fork();
	if(pid < 0)
		perror("fork error!\n");
	else if(pid == 0) {
		pid_t temp;
		printfc("wait parent exit!\n");
		temp = waitpid(curr_pid, NULL, 0);	// no effect: waitpid is just for waiting childrens
		printfc("parent pid:%d\n", temp);
		perror("waitpid status:");
		exit(9);
	} else {
		pid_t child;
		int status;
		sleep(3);
		printfp("\n");
	}
	printf("end\n");
    return 0;
}
