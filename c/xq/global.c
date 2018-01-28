#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int ga = 100;
int *pga = &ga;

int main(int argc, char *argv[])
{
	printf("%d, %p, %d\n", ga, pga, *pga);
    return 0;
}
