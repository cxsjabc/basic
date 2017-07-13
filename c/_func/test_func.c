#include <stdio.h>

int	show(int);

int show(int a)
{
	printf("func show\n");
	return 1;
}


int main()
{
	show(1);
    return 0;
}
