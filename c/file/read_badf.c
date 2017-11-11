#include <stdio.h>
#include <unistd.h>

int main()
{
	char buf[128];
	ssize_t nread;

	nread = read(10, buf, 1);
	if(nread == -1) {
		perror("read error:");
	}
	

    return 0;
}
