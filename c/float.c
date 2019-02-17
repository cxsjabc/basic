#include <stdio.h>

int main(int argc, char *argv[])
{
	float f1 = 1.0000002;
	float f2 = 1.0000003;
	float f3 = 1.00000002, f4 = 1.00000003;

	printf("%f %f %d\n", f1, f2, f1 == f2);
	printf("%#x %#x\n", *(int *)&f1, *(int *)&f2);

	printf("%f %f %d\n", f3, f4, f3 == f4);
	printf("%#x %#x\n", *(int *)&f3, *(int *)&f4);
    return 0;
}
