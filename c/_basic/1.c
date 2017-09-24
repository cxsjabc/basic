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
void interrupt_process(int);


int main()
{
	int ret;
	void * p;
	int i = 1;
	unsigned int old;
	char buf[32] = {0};
	int cnt;
	// P_D(sizeof(int));
	signal(SIGALRM, wakeup);
	// old = alarm(4);
	// P_D(old);
	
	signal(SIGINT, interrupt_process);
	cnt = read(0, buf, 32);
	//printf("cnt: %d, errno: %d, err_str:%s\n", cnt, errno, strerror(errno));	
	printf("cnt: %d, errno: %d\n", cnt, errno);	
	if(cnt == -1 && errno == EINTR)
	{
		printf("read error..ERRNO:%d\n", errno);
	}else
	{
		printf("input: %s\n", buf);
	}

	//pause();
	//printf("after pause\n");	
    return 0;
}


void interrupt_process(int arg)
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

