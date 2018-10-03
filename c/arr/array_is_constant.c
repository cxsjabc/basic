#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int arr[10];
	int *p = NULL;

	arr = p;	// array type 'int [10]' is not assignable

    return 0;
}
