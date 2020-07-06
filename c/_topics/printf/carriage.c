#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void carriage()
{
	char c = '0';

	while(1) {
		printf("%c", c);
		fflush(stdout);

		++c;
		if (c > '9')
			c = '0';
		printf("\r");

		sleep(1);
	}
}

int main(int argc, char *argv[])
{
	carriage();
	return 0;
}
