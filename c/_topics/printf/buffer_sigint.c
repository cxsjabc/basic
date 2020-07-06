#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	printf("hello, my cat");
	sleep(3);
	printf("Byebye, my cat!\n");

	return 0;
}
