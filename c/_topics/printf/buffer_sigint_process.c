#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>

void sig_int_handler(int sig)
{
	printf("Received SIGINT... ");
	exit(-1);
}

int main(int argc, char *argv[])
{
	signal(SIGINT, sig_int_handler);

	printf("hello, my cat... ");
	sleep(10);
	printf("Byebye, my cat!\n");

	return 0;
}
