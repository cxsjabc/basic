#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int i;
	static int arr[2];
	static int arr1[2] = {15, 0xFF};

	printf("&i:%p, &arr:%p, &arr1:%p\n", &i, arr, arr1);
    return 0;
}
