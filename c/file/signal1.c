#include <stdio.h>
#include <unistd.h>
#include <signal.h>


int i;

void sig_int()
{
	printf("calls sig_int...\n");
}

void sig_fpe()
{
	printf("calls sig_fpe...\n");
	i = 2;	// here, change the divisor to non-zero for avoiding sig_fpe called for ever 
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
		int j;
		scanf("%d", &i);
		j = 10 / i;
		printf("%d\n", j);
	}
	
    return 0;
}
