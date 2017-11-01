#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int i, j;

	i = 2;
	scanf("%d", &j);

    printf("hello, my cat:%d\n", i / j);
    return 0;
}
