#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int a = 7;

int main(int argc, char *argv[])
{
	printf("hello, my cat: %p\n", &a);
	return 0;
}
