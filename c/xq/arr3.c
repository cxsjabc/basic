#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int arr[][2][2] = {1, 2, 3, 4, 5, 6};
	
	printf("%p, %p, %p, %p, %p\n", arr, arr + 1, arr[0], arr[0] + 1, &arr[0][0] + 1);
    return 0;
}
