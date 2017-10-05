#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int i, j;
	char buf[128];
	int n;

    //printf("\%");	// incomplete format specifier
	// printf("%%\n");	// output: %

	// scanf("%d%i", &i, &j);	// %i can accept: 012 or 0x12
	// printf("%d %i\n", i, j);

	// i = 32768;	// %hd: i is overflow
	// printf("%hd %d\n", i, i);

	// scanf("%s", buf);	
	// printf("%*s", 8, buf);	//  * is replaced with 8	

	printf("hello猫猫%nmaomao\n", &n);	// %n: stores the printed bytes
	printf("%d\n", n);

    return 0;
}
