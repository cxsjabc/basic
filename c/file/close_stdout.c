#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int fd;

    printf("hello, this should be output\n"); 
	fclose(stdout);
    printf("hello, my cat\n"); // output nothing

	fd = open("data.in", O_RDONLY);  // because stdout(1) is closed, so fd should be 1
	if(fd >= 0) {
		fprintf(stderr, "fd:%d\n", fd);
	} else {
		fprintf(stderr, "error fd:%d\n", fd);
	}	

    return 0;
}
