#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int arr[4];
	int arr1[2][2];
	printf("arr:%p, &arr:%p\n", arr, &arr);
	printf("arr1:%p, &arr1:%p\n", arr1, &arr1);
	return 0;
}
