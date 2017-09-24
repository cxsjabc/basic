#include <stdio.h>
#include <utime.h>
#include <fcntl.h>
#include <sys/stat.h>

#define P_D(n)	printf(#n " %d\n", (n))

#define FILE_NAME	"hello.c"


void hexdump(void * p, size_t size, size_t block_size)
{
	int i;
	for(i = 0; i < size; i += block_size)
	{
		if(block_size == 1)
			printf("%X ", *(unsigned char *)(p + i));
		else if(block_size == 2)
			printf("%X ", *(unsigned short *)(p + i));
		else if(block_size == 4)
			printf("%X ", *(unsigned int *)(p + i));
	}
	printf("\n");
}


int main()
{
	int ret;
	char buf[] = {"abcd"};
	hexdump(buf, 4, 2);
	
    return 0;
}
