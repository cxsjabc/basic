/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	int digits[10] = {0}, blank, other;
	int c;
	int i;

	blank = other = 0;

	while((c = getchar()) != EOF) {
		if(c >= '0' && c <= '9')
			digits[c - '0']++;
		else if(c == ' ' || c == '\t' || c == '\n')
			++blank;
		else
			++other;
	}

	for(i = 0; i < 10; ++i)
		printf("%d: %d ", i, digits[i]);
	printf("\n");

	printf("blank: %d, other: %d\n", blank, other);
	
	return 0;
}
