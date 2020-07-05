#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void delay_ms(int miliseconds)
{
	int i;
	while(miliseconds) {
		for(i = 0; i < 100000; ++i) ;
		--miliseconds;
	}
}

void check_stdout_buf_size()
{
	while(1) {
		printf("a");
		delay_ms(1);
	}
}

int main(int argc, char *argv[])
{
	check_stdout_buf_size();

	return 0;
}
