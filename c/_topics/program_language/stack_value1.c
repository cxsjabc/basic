/*
   Xi Chen(511272827@qq.com)
   cxsjabcabc
*/
#include <stdio.h>

void func1()
{
	int i;
	int j;

	i = 0x5AA55AA5;
	j = 0xCDDCCDDC;
}

void func2()
{
	int i;
	int j;

	printf("0x%x 0x%x\n", i, j);
}

int main(int argc, char *argv[])
{
	func1();
	func2();

	return 0;
}
