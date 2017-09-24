#include <stdio.h>

int main()
{
	char fmt[12];
	int i = 10;

	scanf("%s", fmt);

	printf(fmt, i);

    return 0;
}
