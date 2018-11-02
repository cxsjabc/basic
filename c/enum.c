#include <stdio.h>

int main(int argc, char *argv[])
{
	enum animals { xiong, eyu, xiyi, mao};

	enum animals one;
	//int mao = 1;
	one = xiyi;
	one = 5;	

	printf("%d\n", one);
    return 0;
}
