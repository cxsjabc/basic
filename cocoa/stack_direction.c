#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main(int argc, char *argv[])
{
	int a, b;

	printf("&a %c &b\n", (&a > &b) ? '>' : ((&a < &b) ? '<' : '='));
    return 0;
}
