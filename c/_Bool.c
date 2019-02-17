#include "common_local.h"
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
	_Bool b = 35;
	bool b1 = true;

	PD(b);
	PD(b1);
    return 0;
}
