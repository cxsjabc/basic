#include <stdio.h>
#include "common_local.h"


char sg[][8] = {"Mercury", "Earth"};

int main()
{
	char *s = "eyu";
//	print_by_byte(s, 2);
	print_by_byte(sg, 16);

    return 0;
}
