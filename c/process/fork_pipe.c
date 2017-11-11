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
	int fds[2];
	int res;

	res = pipe(fds);
	PD(res);

	pid = fork();
	if(pid < 0)
		perror("fork error!\n");
	else if(pid == 0) {
		int res;
		printfc("\n");
		close(0);
		dup(fds[0]);
		close(fds[0]);
		close(fds[1]);
		res = execlp("od", "od", "-c", NULL);
		printf("execlp failed!\n");
	} else {
		printfp("\n");
		close(fds[0]);
		write(fds[1], "mao", 3);
		close(fds[1]);
	}
    return 0;
}
