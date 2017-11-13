#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int i;

	scanf("%d", &i);
	printf("%*d\n", i, 10);
    return 0;
}
