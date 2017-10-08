#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>

#include "common_local.h"

int main()
{
	int n;
	int res;
	
	while(1) {
		res = scanf("%d", &n);	// input: a
		PD(res);	// will loop forever
		if(ferror(stdin)) {	// not means: stdin is in error
			printf("stdin is in error!\n");
		}
	}
		

    return 0;
}
