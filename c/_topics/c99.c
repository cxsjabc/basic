#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

// comment.

int main(int argc, char *argv[])
{
	int i;

	printf("abc%n", &i);
	printf("%d\n", i);
    return 0;
}
