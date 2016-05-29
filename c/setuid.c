#include <stdio.h>

int main()
{
	int ret;
	
	ret = setuid(0);
	//perror("setuid:");
	printf("ret:%d\n", ret);
	

    return 0;
}
