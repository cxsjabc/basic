#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include <sys/wait.h>

int main()
{
	pid_t p;
    printf("hello, my cat\n");
	FILE *fp;

	fp = fopen("data.in", "r+");
	assert(fp);

	fseek(fp, 1, SEEK_SET);	// move to pos: 1
	p = fork();
	if(p > 0) {
		long pos;

		printf("parent process: child pid:%d\n", p);
		pos = ftell(fp);		// should be 1
		printf("pos:%ld\n", pos);

		fgetc(fp);
		pos = ftell(fp);		// should be 2
		printf("pos:%ld\n", pos);

		wait(NULL);
		fclose(fp);
	} else if(p == 0) {
		long pos;
		
		sleep(3);
		printf("child process\n");

		pos = ftell(fp);		// should be 1
		printf("pos:%ld\n", pos);
		fclose(fp);
	} else { // fork error
		perror("fork error:");
	}

    return 0;
}
