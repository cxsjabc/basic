#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	fd = open("1", O_RDONLY);
	if(fd >= 0)
		printf("open handle value:%d\n", fd);

    return 0;
}
