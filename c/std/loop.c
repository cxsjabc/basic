#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int i = 1, j = 0;
	while(1) {
		printf("loop count %d\n", i++);	
		j = 0;
		while(j < 200000000) {
				++j;
		}
	}
    return 0;
}
