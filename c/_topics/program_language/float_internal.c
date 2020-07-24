/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dump_bits(void *p, int bytes)
{
	int i, j;
	int bits_stack[32] = {0};
	int *bits;
	char *pc;
	int bits_len;

	bits = bits_stack;
	bits_len = 32;
	if (bytes > 4) {
		bits = (int *)malloc(bytes * 8);
		if (!bits)
			return;

		bits_len = bytes * 8;
		memset(bits, 0, bits_len);
	}

	pc = (char *)p;
	for (i = bytes - 1; i >= 0; --i) {
		unsigned char c =  *(unsigned char *)(pc + i);
		j = bits_len - 1 - i * 8;
		while(c) {
			bits[j--] = c % 2;
			c /= 2;
		}
	}

	for (i = 0; i < bits_len; ++i) {
		printf("%d ", bits[i]);
		if ((i + 1) % 4 == 0)
			printf(" ");
	}
	printf("\n");

	if (bytes > 4)
		free(bits);
}

int main(int argc, char *argv[])
{
	float f;

	scanf("%f", &f);

	dump_bits(&f, sizeof(f));

	return 0;
}
