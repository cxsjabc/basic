#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

void print_bits(unsigned int n)
{
	char arr[32];
	int i = 0;
	int j;
	
	if(n == 0) {
		printf("0\n");
		return;
	}
	while(n != 0) {
		arr[i++] = (n % 2);
		n /= 2;
	}
	j = i - 1;
	while(j >= 0) {
		printf("%d ", arr[j]);
		--j;
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	int n = 100;

	if(argc > 1)
		n = atoi(argv[1]);

	print_bits(n);
    return 0;
}
