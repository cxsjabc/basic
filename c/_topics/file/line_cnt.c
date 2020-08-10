/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	int c, n;

	n = 0;
	while( (c = getchar()) != EOF) {
		if(c == '\n')
			++n;
	}

	printf("%d\n", n);
	return 0;
}
