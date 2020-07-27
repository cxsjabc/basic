/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>

void dump_stack_data()
{
	int i;
	int *pi;
	int len;

	i = 0;
	pi = &i;

	for(len = -0x10; len <= 0; len++) {
		printf("0x%-12x ", *(pi + len));
		
		if ((i + 1) % 4 == 0)
			printf("\n");
		++i;
	}
}

int main(int argc, char *argv[])
{
	dump_stack_data();
	return 0;
}
