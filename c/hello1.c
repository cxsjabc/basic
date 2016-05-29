#include <stdio.h>
#include <utime.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/param.h>
#include <unistd.h>
#include <sys/types.h>
#include <setjmp.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <semaphore.h>

#define P_D(n)	printf(#n " %d\n", (n))

#define FILE_NAME	"hello.c"
extern int add(int, int);

void f();
int x = 1;
int y = 1;

int add(int a, int b)
{
	int temp;
	asm("movl $1, %eax");
	asm("movl $2, %ebx");
	asm("addl %ebx, %eax");
	asm("movl %%eax, %0":"=r"(temp));
	printf("temp: %d\n", temp);
	return a + b;
}

struct add
{
	int a;
};

void doit()
{
	fork();
	fork();
	printf("hello\n");
	return;
}

void signal_handler_func(int sig_num)
{
	static int i = 0;
	printf("catch signal %d\n", sig_num);
	if(i < 5)
	{
		printf("alarm happen...\n");
		++i;
		alarm(1);
	}else {
		printf("end...\n");
		exit(0);
	}
}

void dosth(jmp_buf * buf);

int main()
{
	int ret;
	char buf1[MAXPATHLEN];
	struct add a1;
	pid_t pt;
	jmp_buf buf;
	FILE * fp;
	int fd;
	ssize_t ret1;	
	char **pp;
	struct hostent * host;
	struct in_addr inaddr;
	int i = 0;
	struct sockaddr_in addr_in;
	sem_t sem;
	
	/*
	sem_init(&sem, 0, 1);	
	sem_wait(&sem);
	++i;
	printf("i: %d\n", i);
	sleep(3);
	sem_post(&sem);

	sem_destroy(&sem);

	*/
	printf("1");
	sleep(2);

	/*
	host = gethostbyname("localhost");
	//for(pp = host->h_aliases; *pp != NULL; ++pp)
	for(i = 0; host->h_aliases[i]; ++i)
		printf("alias: %s\n", host->h_aliases[i]);

	for(i = 0; host->h_addr_list[i]; ++i){
		inaddr = *((struct in_addr *)host->h_addr_list[i]);
		char * addr = inet_ntoa(inaddr);
		char buf[32];
		strcpy(buf, addr);
		printf("addr: %s\n", buf == NULL ? "null" : buf);
	}
	*/
	

	//signal(SIGALRM, signal_handler_func);
	
	/*
	if((pt = fork()) == 0) {
		//while(1);
		sleep(2);
		//printf("never go here...\n");
		exit(0);
	}
	*/

	return 0;
}

void dosth(jmp_buf * buf)
{
	longjmp(*buf, 2);
}

