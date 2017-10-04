#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
#define	BUF_SIZE	6
	char buf[BUF_SIZE];
	pid_t p;
	int status;

	while(fgets(buf, BUF_SIZE, stdin) != NULL) {
		if(buf[strlen(buf) - 1] == '\n')
			buf[strlen(buf)  - 1] = '\0';
		if((p = fork()) < 0)
			printf("fork error!\n");
		else if(p == 0) {
			// child process
			int ret;
			ret = execlp(buf, buf, (char *)0);
			if(ret < 0)
				perror("execlp error:");
			printf("shouldn't execute here!\n");
		} else {
			// parent process
		}		

		if(waitpid(p, &status, 0) < 0)
			perror("waitpid failed:");
	}
    return 0;
}
