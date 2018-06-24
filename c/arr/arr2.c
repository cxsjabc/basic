#include <stdio.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

	printf("arr:%p, arr+1:%p, *arr:%p, *(arr + 1):%p\n", 
		arr, arr + 1, *arr, *(arr + 1));

	assert((void *)arr == (void *)*arr);
	assert((void *)(arr + 1) == (void *)*(arr + 1));

    return 0;
}
