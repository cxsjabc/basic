#include <stdio.h>
#include <unistd.h>

int main()
{
	char buf[128];
	ssize_t nread;

	nread = read(0, buf, 1);
	if(nread > 0) {
		write(1, buf, nread);
	}
	

    return 0;
}
