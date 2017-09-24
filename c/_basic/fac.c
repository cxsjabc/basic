#include <stdio.h>

int fac(int n)
{
	if(n == 1 || n == 2)
		return 1;
	return fac(n - 1) + fac(n - 2);
}

int main()
{
	int n = 12, p = 50;
	int i = 1;

	for(; i < 51; ++i)
		printf("fac(%d)=%d\n", i, fac(i));	

    return 0;
}
