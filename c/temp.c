#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 0xFFFFFFFF;
	char ch = 'a';

	printf("sizeof int:%zu, &a:%p, &ch:%p\n", sizeof(int), &a, &ch);

    return 0;
}
