#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main(int argc, char *argv[])
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	PP(a);
	PP(&a);
	PP(a + 1);
	PP(*(a + 1));
	PP(a[0] + 1);
	PP(*a + 1);
	PP(a[0] + 2);

	return 0;
}
