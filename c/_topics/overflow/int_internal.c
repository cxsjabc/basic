/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <stdlib.h>

void dump_int_bits(int n)
{
	int i, j;
	int bits[32] = {0};
	int orig = n;

	for (i = 0; i < 4; ++i) {
		unsigned char c = ((n >> (i * 8)) & 0xFF);
		j = 31 - i * 8;
		while(c) {
			bits[j--] = c % 2;
			c /= 2;
		}
	}

	printf("%d\n", orig);
	for (i = 0; i < 32; ++i) {
		printf("%d ", bits[i]);
		if ((i + 1) % 4 == 0)
			printf(" ");
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	int i = 100;
	
	if (argc > 1)
		i = atoi(argv[1]);

	dump_int_bits(i);

	return 0;
}
