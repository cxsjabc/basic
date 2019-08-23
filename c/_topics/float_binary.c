#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

typedef union {
	float v;
	int	  _v;	// we assue: sizeof(int) == sizeof(float)
}FLOAT;

static void show_int_to_bits(int n)
{
	int buf[64];	// bits of int is less than 33
	int i = 0;
	int j = 0;
	int index = 31;

	do {
		buf[i++] = n % 2;
		n /= 2;
		++j;
	} while(j < 32);

	j = 0;
	while(j < 8) {
		printf("%-5d", index);
		index -= 4;

		++j;
	}
	printf("\n");

	--i;
	j = 0;
	for(; i >= 0; --i) {
		printf("%d", buf[i]);
		++j;
		if(j % 4 == 0)
			printf(" ");
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	FLOAT f1, f2;
	char *com;

	//f.v = 1.5;

	//PX(f._v);
	//show_int_to_bits(f._v);
	
	if(argc < 3) {
		f1.v = 1.00000001;
		f2.v = 1.00000001;
	} else {
		f1.v = (float)atof(argv[1]);
		f2.v = (float)atof(argv[2]);
	}
	show_int_to_bits(f1._v);
	show_int_to_bits(f2._v);

	com = f1.v > f2.v ? ">" : (f1.v < f2.v ? "<" : "=");
	PS(com);

	return 0;
}
