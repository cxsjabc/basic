#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int n;

	n = printf("中国\n");	// 中: utf8 E4B8AD	// if utf8: n: 7
	PD(n);

    return 0;
}
