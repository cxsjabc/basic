#include <stdio.h>
#include "common_local.h"

#define	N	1000000

void	test_reverse_sign()
{
	int a = -1;

	TS(N)
		a = -a;
	TE

	TS(N)
		a = ~a + 1;
	TE
}

void	test_swap()
{
	int a = 1, b = 2;
	int temp;

	// Algo1 is faster than Algo2: Algo2 costs more insturctions.
	// Algo1
	TS(N)
		temp = a;
		a = b;
		b = temp;
	TE

	// Algo2
	TS(N)
		a ^= b;
		b ^= a;
		a ^= b;
	TE
}

void  	test_shift()
{	
	int a = -15, b = 15;
	printf("%d %d\n", a >> 2, b >> 2);
}

#define	N	1000000
void	test_odd_even()
{
	int i = 15;
	int j;

	// test elapsed: & is 2 speed to %.
	TS(N)
		j = i & 1;
	TE

	TS(N)
		j = i % 2;
	TE
}

int main()
{
	//test_shift();
	//test_odd_even();
	//test_swap();
	test_reverse_sign();

    return 0;
}
