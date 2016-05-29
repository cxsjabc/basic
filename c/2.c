#include <stdio.h>
#include <utime.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <signal.h>
#include <errno.h>

#define P_D(n)	printf(#n " %d\n", (n))

#define FILE_NAME	"hello.c"
#define int		short

void wakeup(int);
void int_handler(int);


int main()
{
	int ret;
	void * p;
	int i = 1;
	unsigned int old;
	char buf[32] = {0};
	int cnt;
	struct sigaction newHandler;
	sigset_t	blocked;	
	
	newHandler.sa_handler = int_handler;
	newHandler.sa_flags = SA_RESETHAND | SA_RESTART;
	sigemptyset(&blocked);
	sigaddset(&blocked, SIGQUIT);
	newHandler.sa_mask = blocked;

	if(sigaction(SIGINT, &newHandler, NULL) == -1)
	{
		perror("sigaction");
	}else
	{
		while(1){
			fgets(buf, 32, stdin);
			printf("input: %s", buf);
		}
	}

	// signal(SIGINT, int_handler);

    return 0;
}


void int_handler(int arg)
{
	printf("sigint process...\n");
	sleep(4);
}

void wakeup(int arg)
{
	printf("wakeup begin...\n");
	sleep(3);
	printf("wakeup end...\n");
}

