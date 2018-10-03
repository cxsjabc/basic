#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

void test(int n)
{
	int arr[n];
	int i;

	for(i = 0; i < n; ++i)
		arr[i] = i + 1;

	print_arr(arr, n);
}

int main(int argc, char *argv[])
{
	int n;
	
	scanf("%d", &n);

	test(n);
    return 0;
}
