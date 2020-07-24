/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>
#include <string.h>

int pow_int(int base, int n)
{
	int ret;

	ret = 1;
	while(n > 0) {
		ret *= base;
		--n;
	}
	return ret;
}

void cal_bits(char *s)
{
	int len;
	int i;
	int sum = 0;

	len = strlen(s);
	for(i = 0; i < len; ++i) {
		sum += pow_int(2, len - 1 - i) * (s[i] - '0');
	}
	printf("%d/%d\n", sum, 2 << (len - 1));
}

int main(int argc, char *argv[])
{
	char bits[32] = {0};

	scanf("%s", bits);

	cal_bits(bits);

	return 0;
}
