#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sig_int()
{
	printf("calls sig_int...\n");
}

void sig_fpe()
{
	printf("calls sig_fpe...\n");
}

int main()
{
	if(signal(SIGINT, sig_int) == SIG_ERR) {
		perror("register sig_int error");
		return 1;
	}
	if(signal(SIGFPE, sig_fpe) == SIG_ERR) {
		perror("register sig_fpe error");
		return 1;
	}

	while(1) {
		int i, j;
		scanf("%d", &i);	// if input 0, then sig_fpe is called for ever
		j = 10 / i;
		printf("%d\n", j);
	}
	
    return 0;
}
