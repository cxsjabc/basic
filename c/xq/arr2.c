#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int arr[][2] = {{1, 2}, {3, 4}};
	int *p;

	printf("%p, %p\n", &arr[0][0], &arr[1][1]);
	printf("%p, %p, %p\n", arr[0], arr[1], arr[0] + 1);	
    return 0;
}
