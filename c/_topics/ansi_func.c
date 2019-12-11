#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

//double square();	// style 1
double square(double x);	// style 2

int main(int argc, char *argv[])
{
	printf("%g\n", square(3));	// style 1:  0, style 2: 9
	return 0;
}

double square(x)
	double x;
{
	return x * x;
}
