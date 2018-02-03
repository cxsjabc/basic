#include <stdio.h>

#include "common_local.h"

int is_little_endian()
{
	short a = 0x1122;
	return  0x22 == *(unsigned char *)&a;
}

int main(int argc, char *argv[])
{
	PD(is_little_endian());
    return 0;
}
