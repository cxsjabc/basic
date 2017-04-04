#include <stdio.h>

int main()
{
	int i = 1;
	char c = 'A';

	printf("%x %x\n", &i, &c);
	i = i + c;

    return 0;
}
