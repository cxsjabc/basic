#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "common_local.h"

int main()
{
	int c;
	int res;

	while((c = getchar()) != EOF) {
		res = putchar(toupper(c));
		assert(res != EOF);
	}
    return 0;
}
