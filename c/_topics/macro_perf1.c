#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


#undef MAX
#define MAX(a, b)	((a) > (b) ? (a) : (b))

int main(int argc, char *argv[])
{
	printf("%d", MAX(1, 2));
	return 0;
}
