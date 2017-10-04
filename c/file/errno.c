#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd;
	FILE *fp;

	fd = open("./data.in", O_WRONLY);
	printf("%d\n", errno);
	perror("error:");

	fp = fopen("/xxx", "r+");
	printf("%d\n", errno);
	perror("error:");
	//printf("%s\n", strerror(EPERM));

	fclose(fp);
	perror("error:");

	errno = ENOENT;
	perror("argv[0]");

    return 0;
}
