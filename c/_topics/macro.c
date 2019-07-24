#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

void test() {
#define N 10
printf("%d\n", N);
}

int main(int argc, char *argv[])
{
	printf("%d\n", N); 
    return 0;
}
