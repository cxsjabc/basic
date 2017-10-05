#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>
#include <sys/stat.h>

int main()
{
	int fd;
	struct stat st;
	int result;

	fd = open("data.in", O_RDWR);
	assert(fd >= 0);

	result = fstat(fd, &st);
	printf("fstat return:%d, size:%lld\n", result, st.st_size);

	close(fd);
    return 0;
}
